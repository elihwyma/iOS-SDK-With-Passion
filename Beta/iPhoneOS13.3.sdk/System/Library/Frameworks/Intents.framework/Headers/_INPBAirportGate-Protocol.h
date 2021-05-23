/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBAirport;

@protocol _INPBAirportGate <Swift>

@property (retain, nonatomic) _INPBAirport *airport;
@property (nonatomic, readonly) _Bool hasAirport;
@property (copy, nonatomic) NSString *gate;
@property (nonatomic, readonly) _Bool hasGate;
@property (copy, nonatomic) NSString *terminal;
@property (nonatomic, readonly) _Bool hasTerminal;

@end
