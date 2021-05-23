/*
 Image: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions
 */

#import <Intents/INIntent.h>

@class NSString;

@interface INIntent (FMIPActions)

@property (copy, nonatomic, readonly) NSString *rootAggregateKey;
@property (copy, nonatomic, readonly) NSString *aggregateLabel;

+ (void)undonateForDeviceId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

- (id)identifierForIdentifiableIntent:(id)arg1;
- (id)groupIdentifierForIdentifiableIntent:(id)arg1;
- (id)stringForExecutionContext:(long long)arg1;
- (void)donateWithCompletion:(CDUnknownBlockType)arg1;

@end
