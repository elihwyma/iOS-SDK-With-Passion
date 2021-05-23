/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBAppIconImage, _SFPBCalendarImage, _SFPBContactImage, _SFPBGraphicalFloat, _SFPBLocalImage, _SFPBMediaArtworkImage, _SFPBMonogramImage, _SFPBPointSize, _SFPBURLImage;

@protocol _SFPBImage <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
