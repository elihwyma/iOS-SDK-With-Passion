/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@protocol _SFPBAudioPlaybackCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) int state;
@property (copy, nonatomic) NSArray *playCommands;
@property (copy, nonatomic) NSArray *stopCommands;
@property (retain, nonatomic) _SFPBRichText *detailText;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBRichText *subtitle;
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlayCommands: /* Error: Ran out of types for this method. */;
- (unsigned short)addStopCommands: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPlayCommands;
- (unsigned short)playCommandsCount;
- (unsigned short)playCommandsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearStopCommands;
- (unsigned short)stopCommandsCount;
- (unsigned short)stopCommandsAtIndex: /* Error: Ran out of types for this method. */;

@end
