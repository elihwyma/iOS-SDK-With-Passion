/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSOrderedSet, NSString;

@interface FCFDBFeed : NSManagedObject

@property (retain, nonatomic) NSString *feedID;
@property (nonatomic) NSNumber *lookupID;
@property (retain, nonatomic) NSDate *refreshDate;
@property (nonatomic) unsigned long long refreshedToOrder;
@property (retain, nonatomic) NSOrderedSet *segments;

- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (id)prune;
- (void)willAccessFeedRange:(id)arg1;
- (id)contiguousRangeInRange:(id)arg1;
- (void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(_Bool)arg8;
- (id)contiguousSegmentsInFeedRange:(id)arg1;
- (id)firstSegmentFollowingFeedRange:(id)arg1;
- (void)insertSegment:(id)arg1;
- (void)enumerateGapsWithBlock:(CDUnknownBlockType)arg1;

@end
