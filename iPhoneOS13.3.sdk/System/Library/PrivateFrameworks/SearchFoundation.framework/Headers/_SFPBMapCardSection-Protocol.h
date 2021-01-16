//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBLatLng, _SFPBMapRegion, _SFPBPin, _SFPBPunchout;

@protocol _SFPBMapCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *pins;
@property(nonatomic) int pinBehavior;
@property(retain, nonatomic) _SFPBMapRegion *boundingMapRegion;
@property(nonatomic) int sizeFormat;
@property(nonatomic) BOOL interactive;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSString *footnoteLabel;
@property(retain, nonatomic) _SFPBColor *pinColor;
@property(retain, nonatomic) _SFPBLatLng *location;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPin *)pinsAtIndex:(NSUInteger)arg1;
- (NSUInteger)pinsCount;
- (void)addPins:(_SFPBPin *)arg1;
- (void)clearPins;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end
