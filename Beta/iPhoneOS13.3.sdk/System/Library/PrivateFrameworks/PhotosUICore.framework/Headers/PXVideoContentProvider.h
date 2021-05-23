/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, PXVideoContentProviderLoadingResult;

@interface PXVideoContentProvider : PXObservable

{
    PXVideoContentProviderLoadingResult *_loadingResult;
    double _loadingProgress;
    NSString *_contentIdentifier;
}

@property (retain, nonatomic) PXVideoContentProviderLoadingResult *loadingResult;
@property (nonatomic) double loadingProgress;
@property (copy, nonatomic, readonly) NSString *contentIdentifier;

- (void)cancelLoading;
- (id)mutableChangeObject;
- (void)beginLoadingWithPriority:(long long)arg1;

@end
