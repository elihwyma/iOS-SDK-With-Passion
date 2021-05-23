/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@class ASDAudioDevice, ASDAudioDeviceDSPConfiguration, ASDAudioDeviceDSPDatabase, NSString;

@interface ASDDSPAudioDevice

{
    NSString *_resourcePath;
    ASDAudioDevice *_underlyingDevice;
    ASDAudioDeviceDSPConfiguration *_currentDSPConfiguration;
    ASDAudioDeviceDSPDatabase *_dspDatabase;
}

@property (retain, nonatomic) ASDAudioDeviceDSPConfiguration *currentDSPConfiguration;
@property (nonatomic, readonly) ASDAudioDevice *underlyingDevice;
@property (nonatomic, readonly) ASDAudioDeviceDSPDatabase *dspDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dspItemsInConfiguration:(id)arg1 notInConfiguration:(id)arg2;

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
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (id)driverClassName;
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
- (CDUnknownBlockType)getZeroTimestampBlock;
- (CDUnknownBlockType)willDoReadInputBlock;
- (CDUnknownBlockType)willDoWriteMixBlock;
- (void)addInputStream:(id)arg1;
- (void)removeInputStream:(id)arg1;
- (void)addOutputStream:(id)arg1;
- (void)removeOutputStream:(id)arg1;
- (_Bool)underlyingDeviceHasAllProperties:(id)arg1;
- (id)findDSPConfigurationForCurrentState;
- (_Bool)applyDeviceDSPConfiguration:(id)arg1;
- (_Bool)applyStreamDSPConfiguration:(id)arg1 toStream:(id)arg2;
- (_Bool)updateDeviceDSPConfiguration;
- (id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 deviceDSPDatabase:(id)arg3 plugin:(id)arg4;

@end
