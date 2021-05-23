/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _DKSyncHistory : NSObject

{
    NSDate *_lastSyncDate;
    unsigned long long _lastDaySyncCount;
}

@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) unsigned long long lastDaySyncCount;

- (id)init;
- (id)description;
- (id)initWithLastSyncDate:(id)arg1 lastDaySyncCount:(unsigned long long)arg2;

@end
