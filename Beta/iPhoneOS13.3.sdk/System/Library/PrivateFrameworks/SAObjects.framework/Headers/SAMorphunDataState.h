/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceClientState.h>

@class NSDictionary;

@interface SAMorphunDataState : SAAceClientState

@property (copy, nonatomic) NSDictionary *assetVersionPerLocale;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)morphunDataState;
+ (id)morphunDataStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
