/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHImageRequestBehaviorSpec : NSObject

{
    _Bool _synchronous;
    _Bool _networkAccessAllowed;
    _Bool _allowPlaceholder;
    _Bool _onlyUseFetchedAssetPropertiesDuringChoosing;
    long long _choosingPolicy;
    unsigned long long _loadingOptions;
    long long _version;
    long long _resizeMode;
    double _minimumTableThumbnailLongSide;
}

@property (nonatomic) long long choosingPolicy;
@property (nonatomic) unsigned long long loadingOptions;
@property (nonatomic) long long version;
@property (nonatomic) long long resizeMode;
@property (nonatomic, getter=isSynchronous) _Bool synchronous;
@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;
@property (nonatomic) _Bool allowPlaceholder;
@property (nonatomic) _Bool onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) double minimumTableThumbnailLongSide;

+ (unsigned long long)loadingOptionsFromLoadingMode:(long long)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shortDescription;
- (_Bool)shouldLoadImage;
- (_Bool)shouldLoadData;
- (_Bool)shouldLoadURL;
- (_Bool)shouldLoadDataOrURL;

@end
