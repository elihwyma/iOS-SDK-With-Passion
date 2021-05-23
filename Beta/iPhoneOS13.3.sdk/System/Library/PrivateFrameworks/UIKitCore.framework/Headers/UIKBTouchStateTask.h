/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIKBTouchState;

__attribute__((visibility("hidden")))
@interface UIKBTouchStateTask : NSObject <Swift>

{
    UIKBTouchState *_touchState;
    CDUnknownBlockType _task;
    _Bool _isBusy;
}

@property (retain, nonatomic, readonly) UIKBTouchState *touchState;
@property (copy, nonatomic, readonly) CDUnknownBlockType task;
@property (nonatomic) _Bool isBusy;

+ (id)touchStateTaskForTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;

@end
