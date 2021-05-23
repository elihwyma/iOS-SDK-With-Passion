/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXGadgetSpec, PXNoContentGadgetView;

@protocol PXGadgetDelegate;

@interface PXNoContentGadget : NSObject

{
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    NSString *_title;
    NSString *_message;
    double _contentHeightAdjustment;
    PXNoContentGadgetView *_noContentView;
    double _minimumContentHeight;
}

@property (retain, nonatomic) PXNoContentGadgetView *noContentView;
@property (nonatomic, readonly) double minimumContentHeight;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) double contentHeightAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
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
- (_Bool)hasLoadedContentData;
- (void)prepareCollectionViewItem:(struct UICollectionViewCell *)arg1;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;
- (void)configureWithButtonTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2;
- (double)preferredHeightForViewController:(struct NSObject *)arg1;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 minimumContentHeight:(double)arg3;

@end
