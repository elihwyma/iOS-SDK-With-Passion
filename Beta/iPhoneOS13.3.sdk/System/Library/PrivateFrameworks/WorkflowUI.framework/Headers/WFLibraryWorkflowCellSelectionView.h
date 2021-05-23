/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class WFCircularGlyphView;

@interface WFLibraryWorkflowCellSelectionView : UIView

{
    WFCircularGlyphView *_selectedCheckmarkView;
    WFCircularGlyphView *_unselectedCheckmarkView;
    struct CGRect _glyphFrame;
}

@property (retain, nonatomic) WFCircularGlyphView *selectedCheckmarkView;
@property (retain, nonatomic) WFCircularGlyphView *unselectedCheckmarkView;
@property (nonatomic) _Bool selected;
@property (nonatomic) struct CGRect glyphFrame;

- (id)init;

@end
