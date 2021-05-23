/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSNumber, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CRCameraReaderOutputInternal : NSObject

{
    NSString *_type;
    NSArray *_vertices;
    NSString *_stringValue;
    NSNumber *_yearValue;
    NSNumber *_monthValue;
    NSNumber *_dayValue;
    UIImage *_imageValue;
    NSAttributedString *overlayString;
    struct CGRect boundingBox;
    float rotation;
    float _rotation;
    NSString *_formattedStringValue;
    NSAttributedString *_overlayString;
    struct CGRect _boundingBox;
}

@property (retain) NSString *type;
@property (retain) NSArray *vertices;
@property (retain) NSString *stringValue;
@property (retain) NSString *formattedStringValue;
@property (retain) NSNumber *yearValue;
@property (retain) NSNumber *monthValue;
@property (retain) NSNumber *dayValue;
@property (retain) UIImage *imageValue;
@property (retain) NSAttributedString *overlayString;
@property struct CGRect boundingBox;
@property float rotation;

@end
