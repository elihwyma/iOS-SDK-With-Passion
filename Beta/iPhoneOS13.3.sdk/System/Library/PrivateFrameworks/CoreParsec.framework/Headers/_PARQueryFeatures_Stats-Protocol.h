/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _PARQueryFeatures_Stats <Swift>

@property (copy, nonatomic) NSArray *Ceps;
@property (copy, nonatomic) NSArray *CepLongs;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addCep: /* Error: Ran out of types for this method. */;
- (unsigned short)addCepLong: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCep;
- (unsigned short)CepCount;
- (unsigned short)CepAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCepLong;
- (unsigned short)CepLongCount;
- (unsigned short)CepLongAtIndex: /* Error: Ran out of types for this method. */;

@end
