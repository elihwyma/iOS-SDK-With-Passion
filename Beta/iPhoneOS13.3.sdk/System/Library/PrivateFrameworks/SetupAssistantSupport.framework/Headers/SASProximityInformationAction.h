/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction

{
    SASProximityInformation *_information;
}

@property (retain) SASProximityInformation *information;

+ (unsigned long long)actionID;

- (id)init;
- (_Bool)hasResponse;
- (id)responsePayload;
- (void)setResponseFromData:(id)arg1;

@end
