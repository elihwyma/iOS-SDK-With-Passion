/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SASRecordingInfo : AceObject <Swift>

@property (copy, nonatomic) NSNumber *activationAudioAlertDuration;
@property (copy, nonatomic) NSNumber *activationAudioAlertStartTime;
@property (copy, nonatomic) NSNumber *activationHapticAlertDuration;
@property (copy, nonatomic) NSNumber *activationHapticAlertStartTime;
@property (copy, nonatomic) NSNumber *activationTime;
@property (copy, nonatomic) NSString *alertType;
@property (copy, nonatomic) NSNumber *beamFormingStartTime;
@property (copy, nonatomic) NSNumber *buttonDowntime;
@property (copy, nonatomic) NSNumber *buttonUpTime;
@property (nonatomic) _Bool ringerSwitchOff;
@property (nonatomic) _Bool zeroLatencyLaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)recordingInfo;
+ (id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
