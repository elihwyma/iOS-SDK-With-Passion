/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFCacheStatistics : NSObject

{
    unsigned long long _hits;
    unsigned long long _misses;
    unsigned long long _evictions;
}

@property (readonly) unsigned long long hits;
@property (readonly) unsigned long long misses;
@property (readonly) unsigned long long evictions;

- (id)description;
- (void)recordEvictions:(unsigned long long)arg1;
- (void)recordMiss;
- (void)recordHit;
- (void)accumulate:(id)arg1;

@end
