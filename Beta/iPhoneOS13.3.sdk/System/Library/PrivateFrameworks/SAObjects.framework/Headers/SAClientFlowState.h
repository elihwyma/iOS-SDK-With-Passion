/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceClientState.h>

@class NSDictionary;

@interface SAClientFlowState : SAAceClientState

@property (copy, nonatomic) NSDictionary *cachedDomainClassJavascriptChecksumMap;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)clientFlowState;
+ (id)clientFlowStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
