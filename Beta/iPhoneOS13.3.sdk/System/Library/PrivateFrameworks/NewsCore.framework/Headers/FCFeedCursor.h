/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDate;

@interface FCFeedCursor : NSObject <Swift>

{
    unsigned long long _order;
}

@property (nonatomic) unsigned long long order;
@property (nonatomic, readonly) _Bool isTopOfFeed;
@property (nonatomic, readonly) _Bool isBottomOfFeed;
@property (copy, nonatomic, readonly) NSDate *date;

+ (_Bool)supportsSecureCoding;
+ (id)cursorForDate:(id)arg1;
+ (id)cursorForOrder:(unsigned long long)arg1;
+ (id)cursorForCurrentDate;
+ (id)cursorForBottomOfFeed;
+ (id)cursorForTopOfFeed;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compareToCursor:(id)arg1;
- (_Bool)isEqualToCursor:(id)arg1;
- (_Bool)hasReachedCursor:(id)arg1;
- (id)topmostCursor:(id)arg1;
- (id)bottommostCursor:(id)arg1;

@end
