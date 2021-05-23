/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString;

@interface NTKRichComplicationPickerView : UIView

{
    NSMutableDictionary *_sideViews;
    double _fraction;
    unsigned long long _fromSide;
    unsigned long long _toSide;
    long long _animationType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long numberOfSides;
@property (nonatomic, readonly) unsigned long long numberOfVisibleSides;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateViews;
- (id)initWithMaskImage:(id)arg1 animationType:(long long)arg2;
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;

@end
