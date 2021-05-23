/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXGadgetSpec, UIViewController;

@protocol PXGadgetDelegate, PXPhotoLibraryPresenting;

@interface PXMessagesRecentPhotosGadget : NSObject

{
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _preferredHeight;
}

@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (nonatomic) double preferredHeight;
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

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct NSObject *)contentViewController;
- (void)userDidSelectAccessoryButton:(struct NSObject *)arg1;
- (void)_updateViewControllerInsets;

@end
