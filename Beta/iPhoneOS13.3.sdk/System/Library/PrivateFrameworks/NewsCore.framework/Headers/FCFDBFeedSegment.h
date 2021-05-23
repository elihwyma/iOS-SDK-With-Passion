/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <CoreData/NSManagedObject.h>

@class FCFeedRange, NSData, NSDate, NSNumber, NSSet;

@interface FCFDBFeedSegment : NSManagedObject

@property (nonatomic) unsigned long long top;
@property (nonatomic) unsigned long long bottom;
@property (retain, nonatomic) NSNumber *feedItemCount;
@property (retain, nonatomic) NSData *ckCursor;
@property (retain, nonatomic) NSDate *lastAccessDate;
@property (retain, nonatomic) NSSet *feedItemIndexes;
@property (nonatomic, readonly) FCFeedRange *feedRange;

- (id)description;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;

@end
