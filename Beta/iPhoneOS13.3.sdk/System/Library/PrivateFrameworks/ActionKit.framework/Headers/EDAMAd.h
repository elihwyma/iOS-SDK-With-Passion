/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSData, NSNumber, NSString;

@interface EDAMAd : FATObject

{
    NSNumber *_id;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_advertiserName;
    NSString *_imageUrl;
    NSString *_destinationUrl;
    NSNumber *_displaySeconds;
    NSNumber *_score;
    NSData *_image;
    NSString *_imageMime;
    NSString *_html;
    NSNumber *_displayFrequency;
    NSNumber *_openInTrunk;
}

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *advertiserName;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *destinationUrl;
@property (retain, nonatomic) NSNumber *displaySeconds;
@property (retain, nonatomic) NSNumber *score;
@property (retain, nonatomic) NSData *image;
@property (retain, nonatomic) NSString *imageMime;
@property (retain, nonatomic) NSString *html;
@property (retain, nonatomic) NSNumber *displayFrequency;
@property (retain, nonatomic) NSNumber *openInTrunk;

+ (id)structName;
+ (id)structFields;

@end
