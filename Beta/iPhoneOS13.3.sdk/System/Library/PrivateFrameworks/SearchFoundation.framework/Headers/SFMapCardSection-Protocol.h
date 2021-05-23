/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFLatLng, SFMapRegion;

@protocol SFMapCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
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

@end
