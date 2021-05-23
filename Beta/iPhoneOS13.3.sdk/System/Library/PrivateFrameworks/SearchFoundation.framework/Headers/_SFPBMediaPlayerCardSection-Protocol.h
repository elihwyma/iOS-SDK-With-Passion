/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@protocol _SFPBMediaPlayerCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *mediaItems;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addMediaItems: /* Error: Ran out of types for this method. */;
- (unsigned short)clearMediaItems;
- (unsigned short)mediaItemsCount;
- (unsigned short)mediaItemsAtIndex: /* Error: Ran out of types for this method. */;

@end
