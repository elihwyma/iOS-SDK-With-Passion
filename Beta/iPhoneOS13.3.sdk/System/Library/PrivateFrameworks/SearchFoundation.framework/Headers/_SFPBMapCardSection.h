/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBLatLng, _SFPBMapRegion;

@interface _SFPBMapCardSection : PBCodable <Swift>

{
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
    _SFPBColor *_backgroundColor;
    _SFPBLatLng *_location;
    _SFPBColor *_pinColor;
    NSString *_footnoteLabel;
    NSString *_footnote;
    _SFPBMapRegion *_boundingMapRegion;
    NSArray *_pins;
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
@property (retain, nonatomic) _SFPBLatLng *location;
@property (retain, nonatomic) _SFPBColor *pinColor;
@property (copy, nonatomic) NSString *footnoteLabel;
@property (copy, nonatomic) NSString *footnote;
@property (nonatomic) _Bool interactive;
@property (nonatomic) int sizeFormat;
@property (retain, nonatomic) _SFPBMapRegion *boundingMapRegion;
@property (nonatomic) int pinBehavior;
@property (copy, nonatomic) NSArray *pins;
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
- (void)addPins:(id)arg1;
- (void)clearPins;
- (unsigned long long)pinsCount;
- (id)pinsAtIndex:(unsigned long long)arg1;

@end
