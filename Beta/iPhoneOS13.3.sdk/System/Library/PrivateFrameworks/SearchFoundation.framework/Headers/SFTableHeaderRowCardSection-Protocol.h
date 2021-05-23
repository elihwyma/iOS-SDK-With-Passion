/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFTableAlignmentSchema;

@protocol SFTableHeaderRowCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (copy, nonatomic) NSString *tableIdentifier;
@property (retain, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property (copy, nonatomic) NSArray *data;
@property (nonatomic) _Bool isSubHeader;
@property (copy, nonatomic) NSString *tabGroupIdentifier;
@property (nonatomic) _Bool reducedRowHeight;
@property (nonatomic) int verticalAlign;
@property (nonatomic) _Bool alignRowsToHeader;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
