/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _SFPBApiResults <Swift>

@property (nonatomic) int status;
@property (nonatomic) int resultType;
@property (copy, nonatomic) NSArray *flights;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addFlights: /* Error: Ran out of types for this method. */;
- (unsigned short)clearFlights;
- (unsigned short)flightsCount;
- (unsigned short)flightsAtIndex: /* Error: Ran out of types for this method. */;

@end
