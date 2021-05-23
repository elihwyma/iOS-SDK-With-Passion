/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData;

@protocol _SFPBMapRegion <Swift>

@property (nonatomic) double southLat;
@property (nonatomic) double westLng;
@property (nonatomic) double northLat;
@property (nonatomic) double eastLng;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
