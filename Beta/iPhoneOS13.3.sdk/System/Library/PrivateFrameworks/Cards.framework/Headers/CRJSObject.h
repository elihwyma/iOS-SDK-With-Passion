/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@interface CRJSObject : NSObject

{
    id _backingObject;
}

@property (nonatomic, readonly) id backingObject;

+ (id)objectWithClassName:(id)arg1 objectType:(id)arg2;

- (id)initWithClassName:(id)arg1 objectType:(long long)arg2;
- (id)_backingObjectForJSValue:(id)arg1;
- (void)_logErrorLog:(id)arg1;
- (void)setBackingObjectValue:(id)arg1 forKey:(id)arg2;
- (id)backingObjectValueForKey:(id)arg1;

@end
