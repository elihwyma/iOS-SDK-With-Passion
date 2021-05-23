/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSTripPreviewsCardView.h>

@class CPSAlternateRoutesView, NSString;

@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView

{
    CPSAlternateRoutesView *_alternatesView;
}

@property (nonatomic, readonly) CPSAlternateRoutesView *alternatesView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (id)_linearFocusItems;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;
- (void)setSelectedTrip:(id)arg1;

@end
