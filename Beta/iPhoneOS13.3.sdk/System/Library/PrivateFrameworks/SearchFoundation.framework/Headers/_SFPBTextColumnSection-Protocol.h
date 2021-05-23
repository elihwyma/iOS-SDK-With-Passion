/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _SFPBTextColumnSection <Swift>

@property (copy, nonatomic) NSArray *textLines;
@property (nonatomic) _Bool textNoWrap;
@property (nonatomic) unsigned int textWeight;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addTextLines: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTextLines;
- (unsigned short)textLinesCount;
- (unsigned short)textLinesAtIndex: /* Error: Ran out of types for this method. */;

@end
