/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class NSString;

@interface ATXRouteCacheKey : NSObject

{
    NSString *destinationLocation;
    NSString *transportType;
    _Bool localOnlyAfterFirstUpdate;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
