/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSArray, NSDate;

@interface WBSRemoteHistorySession : NSObject <Swift>

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_items;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (copy, nonatomic, readonly) NSArray *items;
@property (readonly, getter=isCurrentSession) _Bool currentSession;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 items:(id)arg3;

@end
