/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _SFPBTextColumn <Swift>

@property (copy, nonatomic) NSArray *sections;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionsCount;
- (unsigned short)clearSections;
- (unsigned short)sectionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addSections: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
