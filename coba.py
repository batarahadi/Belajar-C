import time

# Catat waktu mulai
start_time = time.perf_counter()

# === Kode program yang ingin diukur ===
data = [i for i in range(100000000)]
sorted_data = sorted(data)
# ======================================

# Catat waktu selesai
end_time = time.perf_counter()

# Hitung durasi
duration = end_time - start_time
print(f"Waktu eksekusi: {duration:.6f} detik")