/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSDictionary, NSIndexPath, NSString, NTKUpNextComplicationConfiguration;

@protocol CLKMonochromeFilterProvider, NTKComplicationTemplateDataSource, NTKEditOptionContainerView, NTKUpNextComplicationViewDelegate;

@interface NTKUpNextComplicationView : UIView <Swift>

{
    id <CLKMonochromeFilterProvider> _filterProvider;
    id <NTKComplicationTemplateDataSource> _dataSource;
    NTKUpNextComplicationConfiguration *_configuration;
    id <NTKUpNextComplicationViewDelegate> _delegate;
    unsigned long long _currentViewIndex;
    NSDictionary *_indexedViews;
    NSDictionary *_indexPathLookup;
    NSDictionary *_numberLookup;
    unsigned long long _centeredViewIndex;
    UIView<NTKEditOptionContainerView> *_pickingView;
    unsigned long long _numberOfViewsInCylinderView;
}

@property (nonatomic) unsigned long long currentViewIndex;
@property (copy, nonatomic) NSDictionary *indexedViews;
@property (copy, nonatomic) NSDictionary *indexPathLookup;
@property (copy, nonatomic) NSDictionary *numberLookup;
@property (nonatomic) unsigned long long centeredViewIndex;
@property (retain, nonatomic) UIView<NTKEditOptionContainerView> *pickingView;
@property (nonatomic) unsigned long long numberOfViewsInCylinderView;
@property (nonatomic, readonly) NSIndexPath *visibleIndexPath;
@property (weak, nonatomic) id <NTKComplicationTemplateDataSource> dataSource;
@property (nonatomic, readonly) NTKUpNextComplicationConfiguration *configuration;
@property (weak, nonatomic) id <NTKUpNextComplicationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (_Bool)canBecomeFirstResponder;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (void)_centerToIndex:(unsigned long long)arg1;
- (void)_setView:(id)arg1 forSideAtIndex:(long long)arg2;
- (void)_enumerateRichViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)showIndexPath:(id)arg1;

@end
