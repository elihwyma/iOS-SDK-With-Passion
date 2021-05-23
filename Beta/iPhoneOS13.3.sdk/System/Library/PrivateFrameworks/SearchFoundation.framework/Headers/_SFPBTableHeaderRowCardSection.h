/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBTableAlignmentSchema;

@interface _SFPBTableHeaderRowCardSection : PBCodable <Swift>

{
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
    _SFPBColor *_backgroundColor;
    NSString *_tableIdentifier;
    _SFPBTableAlignmentSchema *_alignmentSchema;
    NSArray *_datas;
    NSString *_tabGroupIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *tableIdentifier;
@property (retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema;
@property (copy, nonatomic) NSArray *datas;
@property (nonatomic) _Bool isSubHeader;
@property (copy, nonatomic) NSString *tabGroupIdentifier;
@property (nonatomic) _Bool reducedRowHeight;
@property (nonatomic) int verticalAlign;
@property (nonatomic) _Bool alignRowsToHeader;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)addData:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (void)clearData;
- (unsigned long long)dataCount;

@end
