/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface _PXTimerTarget : NSObject

{
    id _target;
    SEL _selector;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

- (void)handleTimer:(id)arg1;

@end
