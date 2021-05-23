/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _CPCardForFeedback <Swift>

@property (copy, nonatomic) NSArray *cardSections;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addCardSections: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCardSections;
- (unsigned short)cardSectionsCount;
- (unsigned short)cardSectionsAtIndex: /* Error: Ran out of types for this method. */;

@end
