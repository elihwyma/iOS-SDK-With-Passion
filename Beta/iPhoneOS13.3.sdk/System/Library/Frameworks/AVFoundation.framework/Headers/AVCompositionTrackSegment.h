/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetTrackSegment.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment

{
    AVCompositionTrackSegmentInternal *_priv;
}

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) int sourceTrackID;

+ (_Bool)supportsSecureCoding;
+ (id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(CDStruct_e83c9415)arg3 targetTimeRange:(CDStruct_e83c9415)arg4;
+ (id)compositionTrackSegmentWithTimeRange:(CDStruct_e83c9415)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(CDStruct_e83c9415)arg3 targetTimeRange:(CDStruct_e83c9415)arg4;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;
- (id)_initWithTimeMapping:(CDStruct_82206317)arg1;

@end
