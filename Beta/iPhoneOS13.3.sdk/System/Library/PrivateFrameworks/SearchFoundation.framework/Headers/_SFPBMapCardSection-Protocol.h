/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBLatLng, _SFPBMapRegion;

@protocol _SFPBMapCardSection <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addPins: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPins;
- (unsigned short)pinsCount;
- (unsigned short)pinsAtIndex: /* Error: Ran out of types for this method. */;

@end
