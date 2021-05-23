/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutManager, NSTextContainer, UIColor;

@protocol _UITextCanvasViewContext <Swift>

@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) NSTextContainer *textContainer;
@property (nonatomic, readonly) struct CGPoint textContainerOrigin;
@property (nonatomic, readonly, getter=isEditable) _Bool editable;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) struct CGPoint drawingScale;

@end
