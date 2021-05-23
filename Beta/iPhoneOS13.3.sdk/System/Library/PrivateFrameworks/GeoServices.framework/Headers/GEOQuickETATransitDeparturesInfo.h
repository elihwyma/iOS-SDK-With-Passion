/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GEOQuickETATransitDeparturesInfo : NSObject

{
    NSString *_direction;
    NSString *_headsign;
    _Bool _departuresHaveFrequency;
    double _departureFrequency;
    NSDate *_departureFrequencyValidUntil;
}

@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) NSString *headsign;
@property (nonatomic, readonly) _Bool departuresHaveFrequency;
@property (nonatomic, readonly) double departureFrequency;
@property (nonatomic, readonly) NSDate *departureFrequencyValidUntil;

- (id)description;
- (id)_chooseMostImportantTransitLegInRoute:(id)arg1;
- (id)initWithComposedRoute:(id)arg1;

@end
