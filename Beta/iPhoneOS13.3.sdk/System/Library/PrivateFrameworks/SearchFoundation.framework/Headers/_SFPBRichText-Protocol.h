/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBText;

@protocol _SFPBRichText <Swift>

@property (retain, nonatomic) _SFPBText *text;
@property (retain, nonatomic) _SFPBGraphicalFloat *starRating;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *formattedTextPieces;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)iconsCount;
- (unsigned short)clearIcons;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addIcons: /* Error: Ran out of types for this method. */;
- (unsigned short)addFormattedTextPieces: /* Error: Ran out of types for this method. */;
- (unsigned short)iconsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearFormattedTextPieces;
- (unsigned short)formattedTextPiecesCount;
- (unsigned short)formattedTextPiecesAtIndex: /* Error: Ran out of types for this method. */;

@end
