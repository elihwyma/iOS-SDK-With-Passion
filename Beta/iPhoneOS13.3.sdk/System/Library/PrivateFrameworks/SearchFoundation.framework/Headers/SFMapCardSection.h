/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFLatLng, SFMapRegion, SFUserReportRequest;

@interface SFMapCardSection : SFCardSection <Swift>

{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int interactive:1;
        unsigned int sizeFormat:1;
        unsigned int pinBehavior:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _interactive;
    int _separatorStyle;
    int _sizeFormat;
    int _pinBehavior;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFLatLng *_location;
    SFColor *_pinColor;
    NSString *_footnoteLabel;
    NSString *_footnote;
    SFMapRegion *_boundingMapRegion;
    NSArray *_pins;
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
@property (retain, nonatomic) SFLatLng *location;
@property (retain, nonatomic) SFColor *pinColor;
@property (copy, nonatomic) NSString *footnoteLabel;
@property (copy, nonatomic) NSString *footnote;
@property (nonatomic) _Bool interactive;
@property (nonatomic) int sizeFormat;
@property (retain, nonatomic) SFMapRegion *boundingMapRegion;
@property (nonatomic) int pinBehavior;
@property (copy, nonatomic) NSArray *pins;
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
- (_Bool)hasInteractive;
- (_Bool)hasSizeFormat;
- (_Bool)hasPinBehavior;

@end
