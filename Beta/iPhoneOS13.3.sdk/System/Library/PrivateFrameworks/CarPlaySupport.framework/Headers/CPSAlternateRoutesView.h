/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class NSArray, NSString;

@protocol CPSAlternateRouteSelecting;

@interface CPSAlternateRoutesView : UIView

{
    NSArray *_availableRouteChoices;
    unsigned long long _indexForSelectedRoute;
    id <CPSAlternateRouteSelecting> _selectionDelegate;
    UIView *_rowStack;
}

@property (retain, nonatomic) UIView *rowStack;
@property (retain, nonatomic) NSArray *availableRouteChoices;
@property (nonatomic) unsigned long long indexForSelectedRoute;
@property (weak, nonatomic) id <CPSAlternateRouteSelecting> selectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusEnvironments;
- (id)_linearFocusItems;
- (void)didSelectRow:(id)arg1 representingRouteChoice:(id)arg2;
- (void)_reloadRows;

@end
