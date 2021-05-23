/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class NSString;

@interface ATXHeuristicAirportCity : NSObject

{
    NSString *_iata;
    NSString *_name;
    NSString *_isoLanguage;
    double _latitude;
    double _longitude;
}

@property (nonatomic, readonly) NSString *iata;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *isoLanguage;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

+ (id)supportedLanguages;
+ (id)cityForAirport:(id)arg1 language:(id)arg2;
+ (id)cityForAirport:(id)arg1;

@end
