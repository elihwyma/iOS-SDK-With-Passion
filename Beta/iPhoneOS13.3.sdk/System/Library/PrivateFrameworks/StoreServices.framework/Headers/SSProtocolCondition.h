/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@interface SSProtocolCondition : NSObject

{
    long long _operator;
    id _value;
}

+ (id)newConditionWithDictionary:(id)arg1;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (_Bool)evaluateWithContext:(id)arg1;

@end
