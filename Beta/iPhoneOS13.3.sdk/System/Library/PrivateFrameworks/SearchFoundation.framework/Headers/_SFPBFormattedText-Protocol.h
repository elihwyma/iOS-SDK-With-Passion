/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, _SFPBImage, _SFPBText;

@protocol _SFPBFormattedText <Swift>

@property (retain, nonatomic) _SFPBText *text;
@property (retain, nonatomic) _SFPBImage *glyph;
@property (nonatomic) _Bool isEmphasized;
@property (nonatomic) _Bool isBold;
@property (nonatomic) int textColor;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
