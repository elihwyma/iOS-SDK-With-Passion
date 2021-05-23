/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCoordinatedRect.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXImageRequester, PXTitleSubtitleLabelSpec, PXViewSpec;

@interface PXRegionOfInterest : PXCoordinatedRect <Swift>

{
    PXImageRequester *_imageRequester;
    PXViewSpec *_imageViewSpec;
    NSString *_title;
    NSString *_subtitle;
    PXTitleSubtitleLabelSpec *_textViewSpec;
    CDUnknownBlockType _placeholderViewFactory;
    struct CGRect _imageContentsRect;
}

@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) struct CGRect imageContentsRect;
@property (retain, nonatomic) PXViewSpec *imageViewSpec;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *textViewSpec;
@property (copy, nonatomic) CDUnknownBlockType placeholderViewFactory;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;

@end
