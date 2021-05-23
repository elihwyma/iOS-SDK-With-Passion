/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBAppIconImage, _SFPBCalendarImage, _SFPBContactImage, _SFPBGraphicalFloat, _SFPBLocalImage, _SFPBMediaArtworkImage, _SFPBMonogramImage, _SFPBPointSize, _SFPBURLImage;

@interface _SFPBImage : PBCodable <Swift>

{
    _Bool _isTemplate;
    _Bool _shouldCropToCircle;
    int _source;
    int _type;
    NSData *_imageData;
    _SFPBGraphicalFloat *_cornerRadius;
    _SFPBGraphicalFloat *_scale;
    _SFPBPointSize *_size;
    NSString *_contentType;
    NSString *_keyColor;
    NSString *_identifier;
    _SFPBURLImage *_urlImage;
    _SFPBContactImage *_contactImage;
    _SFPBMonogramImage *_monogramImage;
    _SFPBLocalImage *_localImage;
    _SFPBAppIconImage *_appIconImage;
    _SFPBMediaArtworkImage *_mediaArtworkImage;
    _SFPBCalendarImage *_calendarImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSData *imageData;
@property (nonatomic) _Bool isTemplate;
@property (nonatomic) _Bool shouldCropToCircle;
@property (retain, nonatomic) _SFPBGraphicalFloat *cornerRadius;
@property (retain, nonatomic) _SFPBGraphicalFloat *scale;
@property (retain, nonatomic) _SFPBPointSize *size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBURLImage *urlImage;
@property (retain, nonatomic) _SFPBContactImage *contactImage;
@property (retain, nonatomic) _SFPBMonogramImage *monogramImage;
@property (retain, nonatomic) _SFPBLocalImage *localImage;
@property (retain, nonatomic) _SFPBAppIconImage *appIconImage;
@property (retain, nonatomic) _SFPBMediaArtworkImage *mediaArtworkImage;
@property (retain, nonatomic) _SFPBCalendarImage *calendarImage;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
