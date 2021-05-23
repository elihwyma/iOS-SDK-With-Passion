/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <AudioServerApplication/ASAObject.h>

@class NSArray, NSString;

@interface ASABox : ASAObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic, readonly) NSString *manufacturer;
@property (copy, nonatomic, readonly) NSString *modelName;
@property (copy, nonatomic, readonly) NSString *serialNumber;
@property (copy, nonatomic, readonly) NSString *firmwareVersion;
@property (copy, nonatomic, readonly) NSString *boxUID;
@property (copy, nonatomic, readonly) NSString *modelUID;
@property (nonatomic, readonly) unsigned int transportType;
@property (nonatomic, readonly) _Bool hasAudio;
@property (nonatomic, readonly) _Bool hasVideo;
@property (nonatomic, readonly) _Bool hasMIDI;
@property (nonatomic, readonly) _Bool isProtected;
@property (nonatomic, getter=isAcquired) _Bool acquired;
@property (nonatomic, readonly) int acquisitionFailure;
@property (nonatomic) _Bool identify;
@property (copy, nonatomic, readonly) NSArray *audioDeviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *deviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *clockDeviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *audioDevices;
@property (copy, nonatomic, readonly) NSArray *clockDevices;
@property (nonatomic, readonly, getter=isNameSettable) _Bool nameSettable;
@property (nonatomic, readonly, getter=isAcquireSettable) _Bool acquireSettable;
@property (nonatomic, readonly, getter=isIdentifySettable) _Bool identifySettable;

- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (id)coreAudioClassName;

@end
