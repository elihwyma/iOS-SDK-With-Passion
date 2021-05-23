/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSNumber, NSObject, NSString, UIImage;

@protocol OS_dispatch_group;

@interface WBSParsecImageRepresentation : WBSParsecModel

{
    NSString *_dataString;
    NSString *_identifier;
    NSString *_imageURLString;
    UIImage *_image;
    _Bool _template;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSNumber *_baselineOffset;
    NSNumber *_roundCornerRadius;
}

@property (nonatomic, readonly) NSNumber *baselineOffset;
@property (nonatomic, readonly) NSNumber *roundCornerRadius;

+ (id)schema;
+ (id)_bagImageDataCache;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithJSONObject:(id)arg1;
- (id)_imageWithData:(id)arg1;
- (id)imageWithSession:(id)arg1;
- (void)_fetchImageData;
- (id)imageWithScaleFactor:(double)arg1;
- (id)_templateImageWithImage:(id)arg1;
- (void)_fetchImageDataUsingBlock:(CDUnknownBlockType)arg1;
- (id)test_data;
- (id)test_identifier;
- (id)test_imageURLString;
- (_Bool)test_isTemplate;

@end
