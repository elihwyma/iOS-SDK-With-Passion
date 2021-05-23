/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <Foundation/NSObject.h>

@interface SASProximityAction : NSObject

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)arg1;

- (_Bool)hasResponse;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:(id)arg1;

@end
