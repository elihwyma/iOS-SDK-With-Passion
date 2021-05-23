/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBSocialMediaPostCardSection : PBCodable <Swift>

{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _nameNoWrap;
    int _separatorStyle;
    int _nameMaxLines;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_name;
    NSString *_handle;
    _SFPBImage *_verifiedGlyph;
    _SFPBImage *_profilePicture;
    _SFPBRichText *_post;
    _SFPBImage *_picture;
    NSString *_timestamp;
    NSString *_footnote;
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
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool nameNoWrap;
@property (nonatomic) int nameMaxLines;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) _SFPBImage *verifiedGlyph;
@property (retain, nonatomic) _SFPBImage *profilePicture;
@property (retain, nonatomic) _SFPBRichText *post;
@property (retain, nonatomic) _SFPBImage *picture;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *footnote;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;

@end
