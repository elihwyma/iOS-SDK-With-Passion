/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString;

@protocol CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate;

@interface CAMFullscreenModeSelector : UIView

{
    id <CAMFullscreenModeSelectorDataSource> _dataSource;
    id <CAMFullscreenModeSelectorDelegate> _delegate;
    long long _selectedMode;
    NSArray *__modes;
    NSDictionary *__titleViewsByMode;
    UIView *__titleContainer;
    long long __state;
    double __touchBeganTime;
    long long __highlightedIndex;
    struct CGPoint __touchBeganPosition;
}

@property (retain, nonatomic, setter=_setModes:) NSArray *_modes;
@property (retain, nonatomic, setter=_setItems:) NSDictionary *_titleViewsByMode;
@property (nonatomic, readonly) UIView *_titleContainer;
@property (nonatomic, setter=_setState:) long long _state;
@property (nonatomic, setter=_setTouchBeganTime:) double _touchBeganTime;
@property (nonatomic, setter=_setTouchBeganPosition:) struct CGPoint _touchBeganPosition;
@property (nonatomic, setter=_setHighlightedIndex:) long long _highlightedIndex;
@property (nonatomic, readonly) double _titleIndexOffset;
@property (nonatomic) id <CAMFullscreenModeSelectorDataSource> dataSource;
@property (nonatomic) id <CAMFullscreenModeSelectorDelegate> delegate;
@property (nonatomic) long long selectedMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_updateAlpha;
- (void)_updateTitles;
- (void)handlePress:(id)arg1;
- (id)_modeTitleForLegacyTitle:(id)arg1;
- (void)_setSelectedMode:(long long)arg1 shouldNotify:(_Bool)arg2;
- (void)_touchSequenceBeganAtPoint:(struct CGPoint)arg1;
- (void)_touchSequenceChangedToPoint:(struct CGPoint)arg1;
- (void)_touchSequenceEndedAtPoint:(struct CGPoint)arg1;
- (long long)_titleIndexForY:(double)arg1;
- (void)_selectModeAtIndex:(long long)arg1;
- (double)_titleYForIndex:(long long)arg1;
- (void)enterTappableState;

@end
