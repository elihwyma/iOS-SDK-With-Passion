/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBSectionSlotCostInfo;

@interface NTPBTodayResultOperationInfo : PBCodable

{
    long long _embedsLimit;
    long long _leadingCellThumbnailSizePreset;
    long long _nonLeadingCellThumbnailSizePreset;
    long long _qualityOfService;
    double _scale;
    double _slotsLimit;
    long long _sourceNameImageSizePreset;
    NSString *_assetsDirectoryFileURLString;
    unsigned int _dynamicThumbnailSizePresetMinimumHeightInPixels;
    unsigned int _dynamicThumbnailSizePresetMinimumWidthInPixels;
    NSString *_keyboardInputMode;
    NTPBSectionSlotCostInfo *_nonVideoSectionSlotCostInfo;
    NTPBSectionSlotCostInfo *_videoSectionSlotCostInfo;
    _Bool _allowLeadingCell;
    _Bool _allowOnlyWatchEligibleSections;
    _Bool _allowSectionTitles;
    _Bool _fetchWidgetConfig;
    _Bool _preferCompactSectionName;
    _Bool _preferCompactSourceName;
    _Bool _respectsWidgetSlotsLimit;
    _Bool _respectsWidgetVisibleSectionsPerQueueLimit;
    struct {
        unsigned int embedsLimit:1;
        unsigned int leadingCellThumbnailSizePreset:1;
        unsigned int nonLeadingCellThumbnailSizePreset:1;
        unsigned int qualityOfService:1;
        unsigned int scale:1;
        unsigned int slotsLimit:1;
        unsigned int sourceNameImageSizePreset:1;
        unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels:1;
        unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels:1;
        unsigned int allowLeadingCell:1;
        unsigned int allowOnlyWatchEligibleSections:1;
        unsigned int allowSectionTitles:1;
        unsigned int fetchWidgetConfig:1;
        unsigned int preferCompactSectionName:1;
        unsigned int preferCompactSourceName:1;
        unsigned int respectsWidgetSlotsLimit:1;
        unsigned int respectsWidgetVisibleSectionsPerQueueLimit:1;
    } _has;
}

@property (nonatomic) _Bool hasSlotsLimit;
@property (nonatomic) double slotsLimit;
@property (nonatomic) _Bool hasRespectsWidgetSlotsLimit;
@property (nonatomic) _Bool respectsWidgetSlotsLimit;
@property (nonatomic) _Bool hasPreferCompactSectionName;
@property (nonatomic) _Bool preferCompactSectionName;
@property (nonatomic) _Bool hasPreferCompactSourceName;
@property (nonatomic) _Bool preferCompactSourceName;
@property (nonatomic) _Bool hasNonLeadingCellThumbnailSizePreset;
@property (nonatomic) long long nonLeadingCellThumbnailSizePreset;
@property (nonatomic) _Bool hasSourceNameImageSizePreset;
@property (nonatomic) long long sourceNameImageSizePreset;
@property (nonatomic) _Bool hasQualityOfService;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly) _Bool hasVideoSectionSlotCostInfo;
@property (retain, nonatomic) NTPBSectionSlotCostInfo *videoSectionSlotCostInfo;
@property (nonatomic, readonly) _Bool hasNonVideoSectionSlotCostInfo;
@property (retain, nonatomic) NTPBSectionSlotCostInfo *nonVideoSectionSlotCostInfo;
@property (nonatomic) _Bool hasFetchWidgetConfig;
@property (nonatomic) _Bool fetchWidgetConfig;
@property (nonatomic) _Bool hasAllowOnlyWatchEligibleSections;
@property (nonatomic) _Bool allowOnlyWatchEligibleSections;
@property (nonatomic) _Bool hasRespectsWidgetVisibleSectionsPerQueueLimit;
@property (nonatomic) _Bool respectsWidgetVisibleSectionsPerQueueLimit;
@property (nonatomic, readonly) _Bool hasAssetsDirectoryFileURLString;
@property (retain, nonatomic) NSString *assetsDirectoryFileURLString;
@property (nonatomic) _Bool hasAllowLeadingCell;
@property (nonatomic) _Bool allowLeadingCell;
@property (nonatomic) _Bool hasLeadingCellThumbnailSizePreset;
@property (nonatomic) long long leadingCellThumbnailSizePreset;
@property (nonatomic) _Bool hasDynamicThumbnailSizePresetMinimumWidthInPixels;
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels;
@property (nonatomic) _Bool hasDynamicThumbnailSizePresetMinimumHeightInPixels;
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels;
@property (nonatomic) _Bool hasAllowSectionTitles;
@property (nonatomic) _Bool allowSectionTitles;
@property (nonatomic) _Bool hasEmbedsLimit;
@property (nonatomic) long long embedsLimit;
@property (nonatomic) _Bool hasScale;
@property (nonatomic) double scale;
@property (nonatomic, readonly) _Bool hasKeyboardInputMode;
@property (retain, nonatomic) NSString *keyboardInputMode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
