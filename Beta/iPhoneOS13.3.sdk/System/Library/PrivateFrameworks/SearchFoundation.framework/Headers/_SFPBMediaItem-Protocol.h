/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBImage, _SFPBPunchout, _SFPBText;

@protocol _SFPBMediaItem <Swift>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBText *subtitleText;
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (retain, nonatomic) _SFPBImage *reviewGlyph;
@property (retain, nonatomic) _SFPBImage *overlayImage;
@property (copy, nonatomic) NSString *reviewText;
@property (retain, nonatomic) _SFPBPunchout *punchout;
@property (copy, nonatomic) NSArray *subtitleCustomLineBreakings;
@property (copy, nonatomic) NSArray *buyOptions;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) _SFPBImage *contentAdvisoryImage;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addSubtitleCustomLineBreaking: /* Error: Ran out of types for this method. */;
- (unsigned short)addBuyOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSubtitleCustomLineBreaking;
- (unsigned short)subtitleCustomLineBreakingCount;
- (unsigned short)subtitleCustomLineBreakingAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearBuyOptions;
- (unsigned short)buyOptionsCount;
- (unsigned short)buyOptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
