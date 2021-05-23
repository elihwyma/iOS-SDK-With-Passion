/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKPaletteToolView.h>

@class NSString, PKInk;

@protocol PKPaletteInkingTool;

@interface PKPaletteSelectingToolView : PKPaletteToolView

{
    id <PKPaletteInkingTool> _inkTool;
}

@property (retain, nonatomic) id <PKPaletteInkingTool> inkTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PKInk *ink;

- (void)setSelected:(_Bool)arg1;
- (void)setInkColor:(id)arg1;
- (id)initWithToolIdentifier:(id)arg1;
- (void)setInkWeight:(double)arg1;
- (id)attributeViewController;

@end
