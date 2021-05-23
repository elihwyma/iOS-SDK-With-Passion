/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFText.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage;

@interface SFFormattedText : SFText <Swift>

{
    struct {
        unsigned int isEmphasized:1;
        unsigned int isBold:1;
        unsigned int textColor:1;
    } _has;
    _Bool _isEmphasized;
    _Bool _isBold;
    int _textColor;
    SFImage *_glyph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *text;
@property (nonatomic) unsigned long long maxLines;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;
@property (retain, nonatomic) SFImage *glyph;
@property (nonatomic) _Bool isEmphasized;
@property (nonatomic) _Bool isBold;
@property (nonatomic) int textColor;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasIsEmphasized;
- (_Bool)hasIsBold;
- (_Bool)hasTextColor;

@end
