/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@interface MapsSuggestionsETARequirements : NSObject

{
    double _maxAge;
    double _maxDistance;
    double _minAccuracy;
}

@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) double maxDistance;
@property (nonatomic, readonly) double minAccuracy;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3;

@end
