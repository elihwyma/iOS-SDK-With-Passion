/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@protocol _SFPBHorizontalScrollCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSArray *cardSections;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addCardSections: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCardSections;
- (unsigned short)cardSectionsCount;
- (unsigned short)cardSectionsAtIndex: /* Error: Ran out of types for this method. */;

@end
