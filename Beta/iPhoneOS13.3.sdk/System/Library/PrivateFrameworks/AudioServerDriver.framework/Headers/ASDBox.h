/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@class NSArray, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ASDBox

{
    NSMutableArray *_audioDevices;
    NSMutableArray *_clockDevices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSString *_boxName;
    _Bool _acquired;
    int _acquisitionFailure;
    _Bool _identify;
    NSObject<OS_dispatch_queue> *_acquireQueue;
    _Bool _hasVideo;
    _Bool _hasAudio;
    _Bool _hasMIDI;
    _Bool _requiresAuthentication;
    _Bool _supportsIdentify;
    _Bool _canSetIdentify;
    _Bool _acquirable;
    _Bool _canChangeBoxName;
    NSString *_boxUID;
    NSString *_modelUID;
    NSString *_manufacturerName;
    NSString *_modelName;
    NSString *_serialNumber;
    NSString *_firmwareVersion;
}

@property (copy, nonatomic) NSString *boxName;
@property (copy, nonatomic, readonly) NSString *boxUID;
@property (copy, nonatomic) NSString *modelUID;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (nonatomic) _Bool hasVideo;
@property (nonatomic) _Bool hasAudio;
@property (nonatomic) _Bool hasMIDI;
@property (nonatomic) _Bool requiresAuthentication;
@property (nonatomic) _Bool supportsIdentify;
@property (nonatomic) _Bool canSetIdentify;
@property (nonatomic, getter=isAcquireable) _Bool acquireable;
@property (nonatomic, getter=isAcquirable) _Bool acquirable;
@property (nonatomic) _Bool canChangeBoxName;
@property (nonatomic) _Bool acquired;
@property (nonatomic) int acquisitionFailure;
@property (nonatomic) _Bool identify;
@property (nonatomic, readonly) unsigned int transportType;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *acquireQueue;
@property (retain, nonatomic, readonly) NSArray *devices;
@property (retain, nonatomic, readonly) NSArray *audioDevices;
@property (retain, nonatomic, readonly) NSArray *clockDevices;

+ (id)keyPathsForValuesAffectingAcquireable;

- (unsigned int)objectClass;
- (void)systemWillSleep;
- (_Bool)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (void)addDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (id)initWithPlugin:(id)arg1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (_Bool)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (id)driverClassName;
- (void)addAudioDevice:(id)arg1;
- (void)removeAudioDevice:(id)arg1;
- (void)systemHasPoweredOn;
- (void)addClockDevice:(id)arg1;
- (void)removeClockDevice:(id)arg1;
- (_Bool)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (_Bool)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (_Bool)changeBoxName:(id)arg1;
- (_Bool)acquireBox:(_Bool)arg1 fromHAL:(_Bool)arg2;
- (void)identifyBox:(_Bool)arg1;
- (void)removeAllAudioDevices;
- (id)initWithBoxUID:(id)arg1 withPlugin:(id)arg2;
- (void)removeAllDevices;
- (void)removeAllClockDevices;
- (void)addDevicesToPlugin;
- (void)removeDevicesFromPlugin;

@end
