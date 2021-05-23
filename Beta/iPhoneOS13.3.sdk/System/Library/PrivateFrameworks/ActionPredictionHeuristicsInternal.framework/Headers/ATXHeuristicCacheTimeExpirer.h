/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <ActionPredictionHeuristicsInternal/ATXHeuristicCacheExpirer.h>

@class NSDate, NSObject;

@protocol OS_dispatch_source;

@interface ATXHeuristicCacheTimeExpirer : ATXHeuristicCacheExpirer

{
    NSObject<OS_dispatch_source> *_source;
    NSDate *_fireDate;
}

@property (nonatomic, readonly) NSDate *fireDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_start;
- (void)_stop;
- (id)initWithFireDate:(id)arg1;

@end
