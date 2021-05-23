/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface WBSHistorySession : NSObject

{
    NSDate *_startDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) _Bool isCurrentSession;

+ (id)currentSession;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSessionStartDate:(id)arg1;

@end
