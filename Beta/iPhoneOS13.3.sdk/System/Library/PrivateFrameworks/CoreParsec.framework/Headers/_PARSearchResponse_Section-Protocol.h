/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _PARSearchResponse_Section <Swift>

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *moreLabel;
@property (copy, nonatomic) NSString *moreUrl;
@property (copy, nonatomic) NSString *morePunchout;
@property (nonatomic) int blockId;
@property (nonatomic) _Bool doNotFold;
@property (copy, nonatomic) NSArray *resultIdentifiers;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichMore;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addResultIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)clearResultIdentifiers;
- (unsigned short)resultIdentifiersCount;
- (unsigned short)resultIdentifiersAtIndex: /* Error: Ran out of types for this method. */;

@end
