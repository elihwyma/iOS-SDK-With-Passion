/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVTimedMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup

{
    AVTimedMetadataGroupInternal *_mutablePriv;
}

@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end
