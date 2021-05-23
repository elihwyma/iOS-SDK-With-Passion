/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class NSString;

@interface FUFlightFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)flightFactoryClassWithProvider:(id)arg1;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)loadFlightDataWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)loadFlightWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)parseFlightData:(id)arg1 withError:(id *)arg2;

@end
