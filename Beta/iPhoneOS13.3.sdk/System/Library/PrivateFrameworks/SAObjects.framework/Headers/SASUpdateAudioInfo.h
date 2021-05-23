/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SASRecordingInfo;

@interface SASUpdateAudioInfo : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (nonatomic) int codec;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *dspStatus;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *headsetAddress;
@property (copy, nonatomic) NSString *headsetId;
@property (copy, nonatomic) NSString *headsetName;
@property (copy, nonatomic) NSNumber *noiseReductionLevel;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) SASRecordingInfo *recordingInfo;
@property (nonatomic) _Bool triggeredTwoShotBorealis;
@property (copy, nonatomic) NSString *vendorId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)updateAudioInfo;
+ (id)updateAudioInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
