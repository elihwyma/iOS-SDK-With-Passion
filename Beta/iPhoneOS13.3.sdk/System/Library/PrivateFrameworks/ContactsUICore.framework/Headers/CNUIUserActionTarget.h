/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNTUCallProvider;

@interface CNUIUserActionTarget : NSObject

{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_teamIdentifier;
    NSString *_actionType;
    id <CNTUCallProvider> _callProvider;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (nonatomic, readonly) NSString *actionType;
@property (retain) id <CNTUCallProvider> callProvider;

+ (id)targetForDirections;
+ (id)targetForTextWithMessages;
+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForVoiceWithTelephony;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForTextWithSkype;
+ (id)targetForVoiceWithCallProvider:(id)arg1;
+ (id)targetForVideoWithCallProvider:(id)arg1;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)arg1;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)arg1;
+ (id)targetForSendMessageIntentWithAppProxy:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3;
- (id)actionsForPostalAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;

@end
