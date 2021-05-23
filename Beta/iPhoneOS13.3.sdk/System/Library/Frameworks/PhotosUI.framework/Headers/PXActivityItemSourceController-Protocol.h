/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSOrderedSet, NSURL, UIActivityViewController;

@protocol PXActivityViewController;

@protocol PXActivityItemSourceController <Swift>

@property (weak, nonatomic) UIActivityViewController<PXActivityViewController> *activityViewController;
@property (copy, nonatomic, readonly) NSOrderedSet *assetItemSources;
@property (nonatomic) unsigned long long preferredPreparationType;
@property (nonatomic) _Bool shouldUseMomentShareLinkInMessagesIfThresholdMet;
@property (copy, nonatomic, readonly) NSOrderedSet *assets;
@property (nonatomic, readonly) _Bool momentSharePublishAttempted;
@property (nonatomic, readonly) _Bool itemSourcesSupportMomentShareLinkCreation;
@property (nonatomic, readonly) NSURL *publishedURL;

- (unsigned short)requestAssetsMediaTypeCount;

@end
