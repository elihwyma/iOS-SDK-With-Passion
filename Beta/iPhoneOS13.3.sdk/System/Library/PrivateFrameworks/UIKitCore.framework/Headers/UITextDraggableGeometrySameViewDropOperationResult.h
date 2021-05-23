/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextRange;

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject

{
    UITextRange *_resultRange;
    CDUnknownBlockType _targetedPreviewProvider;
}

@property (nonatomic, readonly) UITextRange *resultRange;
@property (nonatomic, readonly) CDUnknownBlockType targetedPreviewProvider;

+ (id)resultWithRange:(id)arg1 targetedPreviewProvider:(CDUnknownBlockType)arg2;

- (id)initWithRange:(id)arg1 targetedPreviewProvider:(CDUnknownBlockType)arg2;

@end
