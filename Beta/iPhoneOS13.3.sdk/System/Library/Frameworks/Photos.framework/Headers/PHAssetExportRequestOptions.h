/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHAssetExportRequestOptions : NSObject

{
    _Bool _includeAllAssetResources;
    _Bool _treatLivePhotoAsStill;
    _Bool _flattenSlomoVideos;
    _Bool _dontAllowRAW;
    _Bool _shouldStripLocation;
    _Bool _ensureSRGBCompatibleColorSpace;
    _Bool _disableMetadataCorrections;
    _Bool _forceDateTimeMetadataBaking;
    _Bool _forceLocationMetadataBaking;
    long long _variant;
    NSString *_videoExportPreset;
    NSString *_videoExportFileType;
    long long _locationComparisonStrategy;
}

@property (nonatomic) long long locationComparisonStrategy;
@property (nonatomic) _Bool forceDateTimeMetadataBaking;
@property (nonatomic) _Bool forceLocationMetadataBaking;
@property (nonatomic) _Bool includeAllAssetResources;
@property (nonatomic) long long variant;
@property (nonatomic) _Bool treatLivePhotoAsStill;
@property (nonatomic) _Bool flattenSlomoVideos;
@property (nonatomic) _Bool dontAllowRAW;
@property (nonatomic) _Bool shouldStripLocation;
@property (nonatomic) _Bool ensureSRGBCompatibleColorSpace;
@property (copy, nonatomic) NSString *videoExportPreset;
@property (copy, nonatomic) NSString *videoExportFileType;
@property (nonatomic) _Bool disableMetadataCorrections;

- (id)description;

@end
