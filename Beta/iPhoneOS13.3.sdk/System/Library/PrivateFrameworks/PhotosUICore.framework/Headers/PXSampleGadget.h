/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXGadgetSpec, UIColor;

@protocol PXGadgetDelegate;

@interface PXSampleGadget : NSObject

{
    _Bool _hasContentToDisplay;
    _Bool _expanded;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    NSString *_gadgetTitle;
    unsigned long long _preferredHeight;
    unsigned long long _preferredExpandedHeight;
    UIColor *_backgroundColor;
}

@property (nonatomic) unsigned long long preferredHeight;
@property (nonatomic) unsigned long long preferredExpandedHeight;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) _Bool expanded;
@property (copy, nonatomic) NSString *gadgetTitle;
@property (nonatomic) unsigned long long accessoryButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)userDidSelectAccessoryButton:(struct NSObject *)arg1;
- (void)prepareCollectionViewItem:(struct UICollectionViewCell *)arg1;
- (struct CGRect)view:(id)arg1 colorFrameForBounds:(struct CGRect)arg2;
- (id)initWithMininumHeight:(double)arg1;
- (void)_prepareView:(id)arg1;

@end
