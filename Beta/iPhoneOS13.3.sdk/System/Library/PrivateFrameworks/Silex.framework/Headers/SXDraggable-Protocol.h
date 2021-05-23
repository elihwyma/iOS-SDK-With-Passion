/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@class NSString, UIView;

@protocol NSItemProviderWriting;

@protocol SXDraggable

@property (nonatomic, readonly) id <NSItemProviderWriting> dragObject;
@property (nonatomic, readonly) NSString *dragIdentifier;
@property (nonatomic, readonly) UIView *dragPreviewView;

- (unsigned short)didStartDragging;
- (unsigned short)didEndDragging;
- (unsigned short)stringForAXDragAction;

@end
