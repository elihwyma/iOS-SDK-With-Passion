/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject

{
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray *_dups;
}

- (id)init;
- (void)dealloc;
- (id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2;
- (_Bool)acquireTokenForIdentifier:(unsigned long long)arg1;

@end
