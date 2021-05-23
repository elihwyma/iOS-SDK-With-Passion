/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction

{
    _Bool _passcodeValid;
    NSString *_passcode;
}

@property (retain) NSString *passcode;
@property _Bool passcodeValid;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)arg1;

- (_Bool)hasResponse;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:(id)arg1;

@end
