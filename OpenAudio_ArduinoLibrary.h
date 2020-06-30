
#include <AudioStream_F32.h>
#include <AudioControlSGTL5000_Extended.h>
#include <control_tlv320aic3206.h>
#include "AudioCalcEnvelope_F32.h"
#include "AudioCalcGainWDRC_F32.h"
#include "AudioConfigFIRFilterBank_F32.h"
#include "AudioConvert_F32.h"
#include "AudioEffectEmpty_F32.h"
#include "AudioEffectGain_F32.h"
#include "AudioFilterBiquad_F32.h"
#include <AudioFilterFIR_F32.h>
#include <AudioFilterIIR_F32.h>
#include "AudioMixer_F32.h"
#include "AudioMultiply_F32.h"
#include "AudioSettings_F32.h"
// #include "input_i2s_f32.h"  needs fixing, set to .xxx
// #include "output_i2s_f32.h" needs fixing, set to .xxx
#include "play_queue_f32.h"
#include "record_queue_f32.h"
// #include "control_tlv320aic3206.h"  collides much with Teensy Audio
#include "AudioSwitch_OA_F32.h"
#include "FFT_Overlapped_OA_F32.h"
