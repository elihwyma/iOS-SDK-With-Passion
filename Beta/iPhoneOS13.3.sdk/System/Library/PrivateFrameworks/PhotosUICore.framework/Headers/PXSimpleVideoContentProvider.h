/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXVideoContentProvider.h>

@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider

{
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    double _loadingProgress;
}

- (id)init;
- (id)description;
- (double)loadingProgress;
- (void)setLoadingProgress:(double)arg1;
- (id)contentIdentifier;
- (void)beginLoadingWithPriority:(long long)arg1;
- (id)initWithPlayerItem:(id)arg1 contentIdentifier:(id)arg2;
- (id)loadingResult;
- (void)setLoadingResult:(id)arg1;

@end
