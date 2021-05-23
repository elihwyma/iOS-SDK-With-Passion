/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface RTTUIUtilities : NSObject

{
    _Bool _inUnitTestMode;
    _Bool _headphoneJackSupportsTTY;
    NSObject<OS_dispatch_queue> *_callCenterQueue;
}

@property (nonatomic) _Bool headphoneJackSupportsTTY;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue;
@property (nonatomic) _Bool inUnitTestMode;

+ (_Bool)softwareTTYIsSupported;
+ (_Bool)hardwareTTYIsSupported;
+ (id)sharedUtilityProvider;
+ (_Bool)isRTTSupported;
+ (_Bool)isOnlyRTTSupported;
+ (_Bool)shouldUseRTT;
+ (_Bool)relayIsSupported;
+ (id)relayPhoneNumber;
+ (_Bool)contactIsTTYContact:(id)arg1;
+ (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)cancelCallPromptDisplay;
+ (_Bool)ttyShouldBeRealtimeForCall:(id)arg1;
+ (id)ASCIINumericStringFromString:(struct __CFString *)arg1;
+ (void)contactIsTTYContact:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (id)phoneNumberStringFromString:(id)arg1;

- (id)init;
- (unsigned long long)currentPreferredTransportMethod;
- (id)conversationForCallUID:(id)arg1;
- (_Bool)deleteConversationWithCallUID:(id)arg1;
- (_Bool)contactIsTTYContact:(id)arg1;
- (id)myPhoneNumber;
- (id)ttyMeContact;
- (struct UIEdgeInsets)bubbleInsetForMe:(_Bool)arg1;
- (id)transcriptStringForConversation:(id)arg1;
- (long long)textAlignmentForMe:(_Bool)arg1;
- (struct UIEdgeInsets)textInsetForMe:(_Bool)arg1;
- (id)bubbleFillForMe:(_Bool)arg1;
- (id)ttyIconWithTint:(id)arg1;
- (id)bubbleColorForMe:(_Bool)arg1;
- (id)largeTTYIconWithTint:(id)arg1;
- (id)tintedTTYIcon;

@end
