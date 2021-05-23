/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFText.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFRichText : SFText <Swift>

{
    struct {
        unsigned int starRating:1;
    } _has;
    double _starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *text;
@property (nonatomic) unsigned long long maxLines;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double starRating;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *formattedTextPieces;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasStarRating;
- (void)loadRichTextWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
