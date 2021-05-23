/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIScrollView.h>

#import <Silex/Swift-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSString, UIView;

@protocol SXItemizedScrollViewDataSource;

@interface SXItemizedScrollView : UIScrollView <Swift>

{
    _Bool _contentTooSmall;
    _Bool _gotActiveViewIndexChange;
    id <SXItemizedScrollViewDataSource> _dataSource;
    unsigned long long _activeViewIndex;
    NSArray *_frames;
    NSIndexSet *_visibleIndices;
    NSMutableDictionary *_visibleViewsByIndex;
    struct _NSRange _visibleRange;
    struct CGSize _framesAreValidForSize;
}

@property (nonatomic) struct CGSize framesAreValidForSize;
@property (retain, nonatomic) NSArray *frames;
@property (retain, nonatomic) NSIndexSet *visibleIndices;
@property (nonatomic) _Bool contentTooSmall;
@property (nonatomic) _Bool gotActiveViewIndexChange;
@property (retain, nonatomic) NSMutableDictionary *visibleViewsByIndex;
@property (weak, nonatomic) id <SXItemizedScrollViewDataSource> dataSource;
@property (nonatomic, readonly) struct _NSRange visibleRange;
@property (nonatomic, readonly) unsigned long long activeViewIndex;
@property (nonatomic, readonly) UIView *activeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setActiveViewIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToNext;
- (void)scrollToPrevious;
- (struct CGRect)frameForViewAtIndex:(unsigned long long)arg1;
- (void)reindexate;
- (void)forceCorrectFrames;
- (void)determineNewVisibilityRange;
- (void)viewManagementForRange:(struct _NSRange)arg1;
- (void)rebuildFramesArray;

@end
