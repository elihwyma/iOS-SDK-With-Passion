/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString;

@protocol _PARMapsSession <Swift>

@property (copy, nonatomic) NSString *enviroment;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) double relativeTimestamp;
@property (copy, nonatomic) NSData *metadata;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
