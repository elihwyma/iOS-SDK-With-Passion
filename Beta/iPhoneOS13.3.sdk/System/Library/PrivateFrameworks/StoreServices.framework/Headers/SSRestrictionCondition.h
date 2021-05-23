/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSProtocolCondition.h>

@class NSString;

@interface SSRestrictionCondition : SSProtocolCondition

{
    NSString *_restrictionName;
}

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (_Bool)evaluateWithContext:(id)arg1;

@end
