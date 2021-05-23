/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject

{
    AKPageController *_pageController;
}

@property (weak) AKPageController *pageController;

- (id)initWithPageController:(id)arg1;
- (void)performUndo:(id)arg1;

@end
