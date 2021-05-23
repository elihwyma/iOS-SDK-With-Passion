/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, _SFPBStringDictionary;

@protocol _SFPBTableAlignmentSchema <Swift>

@property (copy, nonatomic) NSArray *tableColumnAlignments;
@property (retain, nonatomic) _SFPBStringDictionary *metadata;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addTableColumnAlignment: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTableColumnAlignment;
- (unsigned short)tableColumnAlignmentCount;
- (unsigned short)tableColumnAlignmentAtIndex: /* Error: Ran out of types for this method. */;

@end
