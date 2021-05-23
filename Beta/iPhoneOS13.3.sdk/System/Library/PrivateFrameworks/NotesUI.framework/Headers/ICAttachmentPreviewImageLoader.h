/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, UIImage;

@interface ICAttachmentPreviewImageLoader : NSObject

{
    _Bool _delayLoadingURLs;
    CDUnknownBlockType _imageDidLoadBlock;
    struct UIImage *_image;
    struct UIImage *_originalImage;
    struct UIImage *_orientedImage;
    NSData *_data;
    double _scale;
    NSArray *_previewImageURLs;
    long long _imageOrientation;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *orientedImage;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSArray *previewImageURLs;
@property (nonatomic) _Bool delayLoadingURLs;
@property (nonatomic) long long imageOrientation;
@property (copy, nonatomic) CDUnknownBlockType imageDidLoadBlock;

+ (struct UIImage *)orientedImage:(struct UIImage *)arg1 withBackground:(int)arg2;
+ (struct UIImage *)orientedImage:(struct UIImage *)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;

- (void)loadData;
- (struct UIImage *)loadImage;
- (id)initWithOriginalImage:(struct UIImage *)arg1 orientedImage:(struct UIImage *)arg2 data:(id)arg3 scale:(double)arg4 previewImageURLs:(id)arg5 delayLoadingURLs:(_Bool)arg6;
- (_Bool)canLoadImage;
- (struct UIImage *)loadOrientedImage;

@end
