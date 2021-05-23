/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@protocol PUPhotoEditResourceLoaderDelegate;

@interface PUPhotoEditResourceLoadRequest : NSObject <Swift>

{
    _Bool _requireLocalResources;
    _Bool _requireAdjustments;
    _Bool _assetLoadingAsRaw;
    id <PUPhotoEditResourceLoaderDelegate> _delegate;
    long long _version;
    long long __resolvedVersion;
    struct CGSize _targetSize;
}

@property (nonatomic, setter=_setResolvedVersion:) long long _resolvedVersion;
@property (nonatomic) _Bool assetLoadingAsRaw;
@property (nonatomic) _Bool requireLocalResources;
@property (nonatomic) _Bool requireAdjustments;
@property (weak, nonatomic) id <PUPhotoEditResourceLoaderDelegate> delegate;
@property (nonatomic) long long version;
@property (nonatomic) struct CGSize targetSize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_needsLoadAdjustments;
- (void)_resolveVersionIfNeededWithWorkVersion:(long long)arg1;
- (_Bool)_isWorkVersionResolved;
- (void)_assertWorkVersionResolved;

@end
