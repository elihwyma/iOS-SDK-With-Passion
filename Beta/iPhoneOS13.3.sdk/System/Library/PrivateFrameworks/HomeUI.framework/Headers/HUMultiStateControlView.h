/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UISegmentedControl;

@protocol HUControlViewDelegate;

@interface HUMultiStateControlView : UIView

{
    NSMutableArray *_possibleValues;
    id <HUControlViewDelegate> _delegate;
    NSString *_identifier;
    UISegmentedControl *_segmentedControl;
}

@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (nonatomic, readonly) NSArray *possibleValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool canBeHighlighted;

+ (Class)valueClass;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_selectedIndexChanged:(id)arg1;
- (void)addPossibleValue:(id)arg1 withTitle:(id)arg2;
- (void)addPossibleValue:(id)arg1 withImage:(id)arg2;

@end
