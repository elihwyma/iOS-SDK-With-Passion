/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFImage, SFPunchout, SFText;

@protocol SFMediaItem <Swift>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFText *subtitleText;
@property (retain, nonatomic) SFImage *thumbnail;
@property (retain, nonatomic) SFImage *reviewGlyph;
@property (retain, nonatomic) SFImage *overlayImage;
@property (copy, nonatomic) NSString *reviewText;
@property (retain, nonatomic) SFPunchout *punchout;
@property (copy, nonatomic) NSArray *subtitleCustomLineBreaking;
@property (copy, nonatomic) NSArray *buyOptions;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) SFImage *contentAdvisoryImage;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
