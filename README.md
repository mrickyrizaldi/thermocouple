# MAX6675 Thermocouple dengan Arduino Mega 2560 PRO

* 1x MAX6675 Thermocouple
* Arduino Mega 2560 PRO
* LCD 16x2 (I2C, opsional)
* Output: Tampilkan suhu pada Serial Monitor dan LCD (bisa diaktifkan nanti)

---

## Koneksi MAX6675 ke Arduino Mega 2560 PRO

| Pin MAX6675 | Keterangan        | Pin Arduino Mega |
| ----------- | ----------------- | ---------------- |
| VCC         | Power             | 5V               |
| GND         | Ground            | GND              |
| SCK         | Clock             | D52              |
| SO          | Serial Out (MISO) | D50              |
| CS          | Chip Select       | D5               |

> *Catatan:* Jika nanti pakai sensor kedua, setiap sensor harus punya pin CS masing-masing. SCK dan SO bisa dipakai bersama.  
> *Catatan:* untuk mikro lain silahkan sesuaikan pin SPInya (SCK dan S0)  

---

## Koneksi LCD 16x2 I2C ke Mega 2560 PRO (opsional)

| Pin LCD I2C | Fungsi | Pin Arduino Mega |
| ----------- | ------ | ---------------- |
| VCC         | Power  | 5V               |
| GND         | Ground | GND              |
| SDA         | Data   | D20              |
| SCL         | Clock  | D21              |

> *Catatan:* I2C LCD otomatis menggunakan SDA/SCL Mega. Tidak perlu ubah kode.

---

## Library

Install library:

* MAX6675 (by Adafruit)
* LiquidCrystal\_I2C (by Frank de Brabander, opsional)

---

## Output Serial Monitor:

```
C = 28.50°C
C = 28.75°C
C = 28.88°C
...
```

---

## Uji Fungsi

1. Pastikan sensor MAX6675 terbaca dan menampilkan nilai suhu di Serial Monitor.
2. Jika ingin menggunakan LCD:

   * Uncomment `#include <LiquidCrystal_I2C.h>`
   * Uncomment bagian inisialisasi dan `lcd.print()`
   * Pastikan alamat I2C sesuai (biasanya 0x27 atau 0x3F).
3. Delay 250 minimal sudah aman untuk update sensor MAX6675.
