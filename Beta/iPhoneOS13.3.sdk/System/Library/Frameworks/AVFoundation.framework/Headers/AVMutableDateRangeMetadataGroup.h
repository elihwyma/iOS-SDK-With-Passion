/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVDateRangeMetadataGroup.h>

@class AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup

{
    AVDateRangeMetadataGroupInternal *_mutablePriv;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;

@end
