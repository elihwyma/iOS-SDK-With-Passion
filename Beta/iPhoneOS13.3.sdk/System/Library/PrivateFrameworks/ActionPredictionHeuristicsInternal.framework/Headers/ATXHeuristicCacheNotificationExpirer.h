/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <ActionPredictionHeuristicsInternal/ATXHeuristicCacheExpirer.h>

@class NSString;

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer

{
    NSString *_notificationName;
    id _token;
    _Bool _isLocal;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_start;
- (void)_stop;
- (id)initLocal:(id)arg1;
- (id)initDistributed:(id)arg1;

@end
