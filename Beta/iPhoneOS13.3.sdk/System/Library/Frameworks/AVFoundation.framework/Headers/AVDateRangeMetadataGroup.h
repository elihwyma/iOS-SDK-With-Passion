/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataGroup.h>

@class AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVDateRangeMetadataGroup : AVMetadataGroup

{
    AVDateRangeMetadataGroupInternal *_priv;
}

@property (nonatomic, readonly) NSDate *discoveryTimestamp;
@property (nonatomic, readonly) NSDate *modificationTimestamp;
@property (nonatomic, readonly, getter=_dateRangeMetadataGroupInternal) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (copy, nonatomic, readonly) NSArray *items;

+ (id)_figMetadataArrayForMetadataItems:(id)arg1;
+ (id)_metadataItemsForFigMetadataArray:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)uniqueID;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;
- (id)classifyingLabel;
- (id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_taggedRangeMetadataDictionary;
- (void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1;

@end
