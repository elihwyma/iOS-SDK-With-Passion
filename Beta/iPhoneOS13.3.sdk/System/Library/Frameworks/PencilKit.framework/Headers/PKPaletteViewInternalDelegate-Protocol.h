/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@class UIView;

@protocol PKPaletteViewInternalDelegate <Swift>

@property (nonatomic, readonly) UIView *hostingView;
@property (nonatomic, readonly, getter=isPaletteMinimized) _Bool paletteMinimized;
@property (nonatomic, readonly, getter=isPaletteDragging) _Bool paletteDragging;
@property (nonatomic, readonly, getter=isPaletteVisible) _Bool paletteVisible;

- (unsigned short)paletteSizeForEdge: /* Error: Ran out of types for this method. */;
- (unsigned short)paletteView:didChangeAnnotationSupport: /* Error: Ran out of types for this method. */;
- (unsigned short)paletteView:didToggleAutoHideOption: /* Error: Ran out of types for this method. */;
- (unsigned short)paletteViewShowFeedbackForToolChange: /* Error: Ran out of types for this method. */;

@end
