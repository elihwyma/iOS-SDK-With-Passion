/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@protocol PKPalettePopoverPresenting <Swift>

- (unsigned short)palettePopoverPermittedArrowDirections;
- (unsigned short)palettePopoverPassthroughViews;
- (unsigned short)palettePopoverLayoutMargins;
- (unsigned short)palettePopoverPresentingController;
- (unsigned short)palettePopoverSourceView;
- (unsigned short)isPalettePresentingPopover;
- (unsigned short)shouldPalettePresentPopover;
- (unsigned short)wantsCustomPalettePopoverPresentationSource;
- (unsigned short)palettePopoverSourceRect;

@end
