/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <AudioServerApplication/ASAObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface ASAAudioDevice : ASAObject

@property (copy, nonatomic, readonly) NSDictionary *headsetInfo;
@property (copy, nonatomic) NSDictionary *clientDescription;
@property (copy, nonatomic, readonly) NSDictionary *deviceDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic, readonly) NSString *manufacturer;
@property (copy, nonatomic, readonly) NSString *deviceUID;
@property (copy, nonatomic, readonly) NSString *modelUID;
@property (nonatomic, readonly) unsigned int transportType;
@property (nonatomic, readonly) unsigned int clockDomain;
@property (nonatomic, readonly, getter=isAlive) _Bool alive;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly) _Bool canBeDefaultDevice;
@property (nonatomic, readonly) _Bool canBeDefaultSystemDevice;
@property (nonatomic) double nominalSampleRate;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) unsigned int inputLatency;
@property (nonatomic, readonly) unsigned int outputLatency;
@property (nonatomic, readonly) unsigned int inputSafetyOffset;
@property (nonatomic, readonly) unsigned int outputSafetyOffset;
@property (nonatomic, readonly) unsigned int zeroTimestampPeriod;
@property (nonatomic) unsigned int ioBufferFrameSize;
@property (nonatomic, readonly) unsigned int minimumIOBufferFrameSize;
@property (nonatomic, readonly) unsigned int maximumIOBufferFrameSize;
@property (nonatomic) float ioCycleUsage;
@property (nonatomic, readonly) double actualSampleRate;
@property (copy, nonatomic, readonly) NSArray *relatedDeviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *nominalSampleRates;
@property (copy, nonatomic, readonly) NSArray *inputStreamObjectIDs;
@property (copy, nonatomic, readonly) NSArray *outputStreamObjectIDs;
@property (copy, nonatomic, readonly) NSArray *controlObjectIDs;
@property (copy, nonatomic, readonly) NSArray *inputStreams;
@property (copy, nonatomic, readonly) NSArray *outputStreams;
@property (copy, nonatomic, readonly) NSArray *controls;
@property (copy, nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) _Bool hasInput;
@property (nonatomic, readonly) _Bool hasOutput;
@property (nonatomic, readonly, getter=isAggregate) _Bool aggregate;
@property (copy, nonatomic) NSString *clockDeviceUID;
@property (copy, nonatomic, readonly) NSDictionary *aggregateDescription;

- (_Bool)defaultDevice;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (_Bool)createAudioProcID:(CDUnknownFunctionPointerType *)arg1 forIOProc:(CDUnknownFunctionPointerType)arg2 withClientData:(void *)arg3 error:(id *)arg4;
- (_Bool)startAudioProc:(CDUnknownFunctionPointerType)arg1 error:(id *)arg2;
- (_Bool)destroyAudioProcID:(CDUnknownFunctionPointerType)arg1 error:(id *)arg2;
- (_Bool)stopAudioProc:(CDUnknownFunctionPointerType)arg1 error:(id *)arg2;
- (id)coreAudioClassName;
- (_Bool)defaultSystemDevice;
- (id)inputStreamUsageForAudioProc:(CDUnknownFunctionPointerType)arg1;
- (_Bool)setInputStreamUsage:(id)arg1 forAudioProc:(CDUnknownFunctionPointerType)arg2;
- (id)outputStreamUsageForAudioProc:(CDUnknownFunctionPointerType)arg1;
- (_Bool)setOutputStreamUsage:(id)arg1 forAudioProc:(CDUnknownFunctionPointerType)arg2;

@end
