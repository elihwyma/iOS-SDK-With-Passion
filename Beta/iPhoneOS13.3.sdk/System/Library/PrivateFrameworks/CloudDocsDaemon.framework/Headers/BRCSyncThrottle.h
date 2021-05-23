/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCThrottle.h>

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle

{
    NSPredicate *_predicate;
}

@property (retain, nonatomic) NSPredicate *predicate;

- (_Bool)_validateThrottleParams:(id)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (_Bool)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long *)arg2 now:(unsigned long long)arg3;

@end
