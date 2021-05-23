/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UISegmentedControl.h>

@class NSMutableArray, NSString;

@interface SUDeferredUISegmentedControl : UISegmentedControl

{
    struct CGRect _deferredFrame;
    double _deferredMaxTotalWidth;
    double _deferredMinSegmentWidth;
    NSMutableArray *_deferredSegments;
    long long _deferredSegmentedControlStyle;
    unsigned long long _deferredSelectedSegmentIndex;
    _Bool _deferredSizeToFit;
    _Bool _isDeferringInterfaceUpdates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) _Bool deferringInterfaceUpdates;

- (void)dealloc;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (long long)selectedSegmentIndex;
- (unsigned long long)numberOfSegments;
- (void)removeAllSegments;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (long long)segmentedControlStyle;
- (void)setSegmentedControlStyle:(long long)arg1;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;
- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_saveSegmentsAsDeferred;

@end
