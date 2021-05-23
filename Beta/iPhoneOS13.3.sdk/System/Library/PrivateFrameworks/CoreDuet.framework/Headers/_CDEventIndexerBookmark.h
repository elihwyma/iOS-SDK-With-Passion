/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _CDEventIndexerBookmark : NSObject

{
    NSDate *_earliestCreationDate;
    NSDate *_latestCreationDate;
    NSDate *_latestTombstoneDate;
    long long _version;
}

@property (copy, nonatomic, readonly) NSDate *earliestCreationDate;
@property (copy, nonatomic, readonly) NSDate *latestCreationDate;
@property (copy, nonatomic, readonly) NSDate *latestTombstoneDate;
@property (nonatomic, readonly) long long version;

+ (_Bool)supportsSecureCoding;
+ (id)baseBookmarkWithVersion:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEarliestCreationDate:(id)arg1 latestCreationDate:(id)arg2 latestTombstoneDate:(id)arg3 version:(long long)arg4;
- (id)updatedBookmarkWithEarliestCreationDate:(id)arg1;
- (id)updatedBookmarkWithLatestCreationDate:(id)arg1;
- (id)updatedBookmarkWithLatestTombstoneDate:(id)arg1;

@end
