/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVControlTarget : NSObject

{
    IKViewElement *_element;
}

+ (void)addTargetInControl:(id)arg1 withViewElement:(id)arg2;

- (id)initWithViewElement:(id)arg1;
- (void)_action:(id)arg1;

@end
