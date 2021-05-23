/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface AVValue : NSObject

{
    SEL _selector;
}

+ (id)valueWithSelector:(SEL)arg1;

- (id)initWithSelector:(SEL)arg1;
- (SEL)selectorValue;

@end
