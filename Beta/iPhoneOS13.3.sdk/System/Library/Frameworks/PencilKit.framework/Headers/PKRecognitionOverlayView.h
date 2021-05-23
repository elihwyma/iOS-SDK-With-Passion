/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class CHVisualizationManager, NSString;

@interface PKRecognitionOverlayView : UIView

{
    CHVisualizationManager *_visualizationManager;
    struct CGAffineTransform _drawingTransform;
}

@property (nonatomic) struct CGAffineTransform drawingTransform;
@property (nonatomic, readonly) CHVisualizationManager *visualizationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)visualizationManager:(id)arg1 needsDisplayInRect:(struct CGRect)arg2;
- (void)visualizationManagerNeedsDisplay:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 visualizationManager:(id)arg2;

@end
