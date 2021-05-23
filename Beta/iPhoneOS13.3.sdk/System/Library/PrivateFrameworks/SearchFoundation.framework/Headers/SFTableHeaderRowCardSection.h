/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFTableRowCardSection.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFTableAlignmentSchema, SFUserReportRequest;

@interface SFTableHeaderRowCardSection : SFTableRowCardSection <Swift>

{
    CDStruct_dff33cb6 _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isSubHeader;
    _Bool _reducedRowHeight;
    _Bool _alignRowsToHeader;
    int _separatorStyle;
    int _verticalAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_tableIdentifier;
    SFTableAlignmentSchema *_alignmentSchema;
    NSArray *_data;
    NSString *_tabGroupIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool hideDivider;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (copy, nonatomic) NSArray *richData;
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

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasCanBeHidden;
- (_Bool)hasHasTopPadding;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasIsSubHeader;
- (_Bool)hasReducedRowHeight;
- (_Bool)hasVerticalAlign;
- (_Bool)hasAlignRowsToHeader;

@end
