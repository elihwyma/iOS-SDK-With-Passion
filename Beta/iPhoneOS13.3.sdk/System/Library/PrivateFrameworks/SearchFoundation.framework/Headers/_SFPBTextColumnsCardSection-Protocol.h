/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@protocol _SFPBTextColumnsCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned int titleWeight;
@property (copy, nonatomic) NSArray *columns;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)columnsCount;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addColumns: /* Error: Ran out of types for this method. */;
- (unsigned short)clearColumns;
- (unsigned short)columnsAtIndex: /* Error: Ran out of types for this method. */;

@end
