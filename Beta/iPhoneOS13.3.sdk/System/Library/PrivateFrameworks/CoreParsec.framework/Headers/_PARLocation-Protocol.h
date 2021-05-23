/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData;

@protocol _PARLocation <Swift>

@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) int source;
@property (nonatomic) float horizontalAccuracy;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
