/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface SCRCTargetSelector : NSObject

{
    id _target;
    SEL _selector;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL selector;

+ (id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2;

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
