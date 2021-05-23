/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, OKPresentationViewController, PHAssetCollection, UIView;

@protocol PXSlideshowSessionDelegate;

@interface PXSlideshowSession : NSObject

{
    OKPresentationViewController *_presentationViewController;
    id <PXSlideshowSessionDelegate> _delegate;
    PHAssetCollection *_assetCollection;
    long long _startIndex;
}

@property (weak, nonatomic) id <PXSlideshowSessionDelegate> delegate;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) long long startIndex;
@property (nonatomic, readonly) OKPresentationViewController *slideshowViewController;
@property (nonatomic, readonly) UIView *slideshowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void *)_loadSlideshowFrameworkIfNeeded;
+ (void)preloadSlideshowFrameworkIfNeeded;

- (id)init;
- (void)dealloc;
- (void)presentationViewControllerDidPrepare:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 startIndex:(long long)arg2;
- (id)_presentationGuidelines;
- (void)_initPresentationViewController;

@end
