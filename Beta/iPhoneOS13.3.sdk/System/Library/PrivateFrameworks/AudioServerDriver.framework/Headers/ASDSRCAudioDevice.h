/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@class ASDAudioDevice, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ASDSRCAudioDevice

{
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    struct {
        unsigned char valid;
        double sampleTime;
        unsigned long long hostTime;
        unsigned long long seed;
    } _lastTimestamp;
    ASDAudioDevice *_underlyingDevice;
}

@property (nonatomic, readonly) ASDAudioDevice *underlyingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isHidden;
- (double)samplingRate;
- (unsigned int)transportType;
- (void)setDeviceName:(id)arg1;
- (id)deviceName;
- (id)modelName;
- (id)manufacturerName;
- (unsigned int)inputLatency;
- (unsigned int)outputLatency;
- (unsigned int)inputSafetyOffset;
- (unsigned int)outputSafetyOffset;
- (id)samplingRates;
- (unsigned int)timestampPeriod;
- (void)changedProperty:(const struct AudioObjectPropertyAddress *)arg1 forObject:(id)arg2;
- (_Bool)requestConfigurationChangeForDevice:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setSamplingRate:(double)arg1;
- (int)startIOForClient:(unsigned int)arg1;
- (int)stopIOForClient:(unsigned int)arg1;
- (id)modelUID;
- (unsigned int)clockDomain;
- (_Bool)canBeDefaultDevice;
- (_Bool)canBeDefaultSystemDevice;
- (unsigned int)clockAlgorithm;
- (_Bool)clockIsStable;
- (_Bool)changeSamplingRate:(double)arg1;
- (int)performStopIO;
- (CDUnknownBlockType)getZeroTimestampBlock;
- (CDUnknownBlockType)willDoReadInputBlock;
- (CDUnknownBlockType)willDoWriteMixBlock;
- (void)setSamplingRates:(id)arg1;
- (id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 plugin:(id)arg3;

@end
