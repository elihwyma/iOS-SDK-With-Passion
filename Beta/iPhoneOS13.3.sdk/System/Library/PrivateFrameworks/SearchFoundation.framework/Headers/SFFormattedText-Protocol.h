/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, SFImage;

@protocol SFFormattedText <Swift>

@property (retain, nonatomic) SFImage *glyph;
@property (nonatomic) _Bool isEmphasized;
@property (nonatomic) _Bool isBold;
@property (nonatomic) int textColor;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
