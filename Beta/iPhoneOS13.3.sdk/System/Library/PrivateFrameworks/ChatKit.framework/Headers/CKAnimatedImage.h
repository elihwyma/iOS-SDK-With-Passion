/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, UIImage;

@interface CKAnimatedImage : NSObject

{
    UIImage *_image;
    NSArray *_durations;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *durations;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;

+ (id)animatedImageWithContentsOfASTCURL:(id)arg1;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)filenameExtension;
+ (_Bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3;
+ (_Bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3;
+ (_Bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (_Bool)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (id)imageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)animatedImageWithASTCData:(id)arg1;
+ (_Bool)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(CDUnknownBlockType)arg3 frameProcessor:(CDUnknownBlockType)arg4;
+ (id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(CDUnknownBlockType)arg2;

- (id)description;
- (id)frames;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (_Bool)writeToASTCURL:(id)arg1;
- (_Bool)writeToCPBitmapURL:(id)arg1;
- (id)_initWithImage:(id)arg1 durations:(id)arg2;

@end
