/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class NSMutableSet;

@interface ATXHeuristicCacheExpirer : NSObject

{
    NSMutableSet *_expirationEntries;
    struct _opaque_pthread_mutex_t _lock;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_start;
- (void)_stop;
- (void)expire;
- (void)startExpiring:(id)arg1 cache:(id)arg2;
- (void)stopExpiring:(id)arg1 cache:(id)arg2;

@end
