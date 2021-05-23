/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ATXUpcomingMediaContainer : NSObject

{
    NSMutableArray *_maybeSortedUpcomingMedia;
    _Bool _sorted;
    _Bool _preferUpcomingMediaForPredictions;
    _Bool _preferenceForUpcomingMediaIsSet;
    _Bool _isInternalApplication;
    NSMutableDictionary *_itemExpiredUpcomingMedia;
    NSMutableDictionary *_itemValidUpcomingMedia;
    NSMutableDictionary *_containerExpiredUpcomingMedia;
    NSMutableDictionary *_containerValidUpcomingMedia;
    NSMutableDictionary *_bucketExpiredUpcomingMedia;
    NSMutableDictionary *_bucketValidUpcomingMedia;
}

@property (nonatomic, readonly) NSMutableDictionary *itemExpiredUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *itemValidUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *containerExpiredUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *containerValidUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *bucketExpiredUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *bucketValidUpcomingMedia;
@property (nonatomic, readonly) NSMutableArray *sortedUpcomingMedia;
@property (nonatomic) _Bool preferUpcomingMediaForPredictions;
@property (nonatomic) _Bool preferenceForUpcomingMediaIsSet;
@property (nonatomic) _Bool isInternalApplication;

+ (void)addToDictionary:(id)arg1 key:(id)arg2 value:(struct _PASTuple2 *)arg3;

- (id)init;
- (void)addUpcomingMediaIntent:(id)arg1 withRank:(id)arg2;
- (_Bool)appSupportsUpcomingMedia;

@end
