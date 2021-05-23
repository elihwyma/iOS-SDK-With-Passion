/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <FlightUtilities/FUFlightFactory.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FUFlightFactory_Parsec : FUFlightFactory

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)convertFlightModel:(id)arg1 withError:(id *)arg2;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)loadFlightStructuresWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)extractTimeForFlightStep:(id)arg1 fromLeg:(id)arg2;
+ (id)airportFromSFAirport:(id)arg1;

@end
