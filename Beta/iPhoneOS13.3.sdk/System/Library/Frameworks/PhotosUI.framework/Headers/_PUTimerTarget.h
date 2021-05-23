/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PUTimerTarget : NSObject

{
    id _target;
    SEL _selector;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

- (void)handleTimer:(id)arg1;

@end
