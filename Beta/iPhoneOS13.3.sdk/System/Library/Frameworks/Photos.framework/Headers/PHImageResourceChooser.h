/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString, PHResourceChooserList;

@protocol PHResourceChooserAsset;

@interface PHImageResourceChooser : NSObject

{
    double _requiredScale;
    PHResourceChooserList *_list;
    _Bool _needsReset;
    _Bool _isCloudSharedMode;
    _Bool _allowHints;
    _Bool _onlyUseFetchedAssetPropertiesDuringChoosing;
    id <PHResourceChooserAsset> _asset;
    long long _policy;
    unsigned long long _loadingOptions;
    long long _requestVersion;
    double _minimumTableThumbnailLongSide;
    id _context;
    NSString *_loggingPrefix;
    CDUnknownBlockType _resourceHandler;
    struct CGSize _desiredSize;
}

@property (nonatomic, readonly) id <PHResourceChooserAsset> asset;
@property (nonatomic) long long policy;
@property (nonatomic) unsigned long long loadingOptions;
@property (nonatomic) long long requestVersion;
@property (nonatomic) struct CGSize desiredSize;
@property (nonatomic) _Bool isCloudSharedMode;
@property (nonatomic) _Bool allowHints;
@property (nonatomic) _Bool onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) double minimumTableThumbnailLongSide;
@property (weak, nonatomic) id context;
@property (retain, nonatomic) NSString *loggingPrefix;
@property (copy, nonatomic) CDUnknownBlockType resourceHandler;

+ (void)initialize;

- (id)init;
- (id)initWithAsset:(id)arg1;
- (void)moveFirst;
- (void)presentNextQualifyingResource;

@end
