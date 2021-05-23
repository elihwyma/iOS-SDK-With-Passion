/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <SetupAssistantSupport/SASProximityAction.h>

@class ACAccount, AKDevice;

@interface SASProximityCompanionAuthRequestAction : SASProximityAction

{
    AKDevice *_companionDevice;
    ACAccount *_account;
}

@property (retain) AKDevice *companionDevice;
@property (retain) ACAccount *account;

+ (unsigned long long)actionID;

- (_Bool)hasResponse;
- (id)responsePayload;
- (void)setResponseFromData:(id)arg1;
- (id)idmsAccountForiCloud;

@end
