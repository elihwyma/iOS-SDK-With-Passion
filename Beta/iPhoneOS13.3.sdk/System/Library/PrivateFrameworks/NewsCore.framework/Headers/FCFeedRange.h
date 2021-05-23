/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCDateRange, FCFeedCursor;

@interface FCFeedRange : NSObject <Swift>

{
    FCFeedCursor *_top;
    FCFeedCursor *_bottom;
}

@property (copy, nonatomic) FCFeedCursor *top;
@property (copy, nonatomic) FCFeedCursor *bottom;
@property (nonatomic, readonly) _Bool reachesTopOfFeed;
@property (nonatomic, readonly) _Bool reachesBottomOfFeed;
@property (nonatomic, readonly) _Bool isEmpty;
@property (copy, nonatomic, readonly) FCDateRange *dateRange;

+ (_Bool)supportsSecureCoding;
+ (id)feedRangeFromDateRange:(id)arg1;
+ (id)feedRangeWithTop:(id)arg1 bottom:(id)arg2;
+ (id)feedRangeFromDate:(id)arg1 toDate:(id)arg2;
+ (id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2;
+ (id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)intersectsRange:(id)arg1;
- (id)feedRangeByIntersectingWithRange:(id)arg1;
- (id)feedRangeByUnioningWithRange:(id)arg1;
- (_Bool)containsFeedRange:(id)arg1;
- (_Bool)containsOrder:(unsigned long long)arg1;
- (_Bool)containsCursor:(id)arg1;
- (_Bool)intersectsOrAdjoinsRange:(id)arg1;

@end
