/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFImage, SFPunchout, SFText;

@interface SFMediaItem : NSObject <Swift>

{
    NSString *_title;
    SFText *_subtitleText;
    SFImage *_thumbnail;
    SFImage *_reviewGlyph;
    SFImage *_overlayImage;
    NSString *_reviewText;
    SFPunchout *_punchout;
    NSArray *_subtitleCustomLineBreaking;
    NSArray *_buyOptions;
    NSString *_contentAdvisory;
    SFImage *_contentAdvisoryImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
