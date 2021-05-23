/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSString, PKDragIndicatorView;

@interface PKAccessoryView : UIView

{
    unsigned long long _edgeLocation;
    PKDragIndicatorView *_dragIndicatorView;
}

@property (retain, nonatomic) PKDragIndicatorView *dragIndicatorView;
@property (nonatomic) _Bool showsDragIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;

- (id)initWithFrame:(struct CGRect)arg1;

@end
