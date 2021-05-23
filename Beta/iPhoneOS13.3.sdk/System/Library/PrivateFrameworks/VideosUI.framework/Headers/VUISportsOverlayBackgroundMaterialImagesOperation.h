/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSDictionary, UIImage;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayBackgroundMaterialImagesOperation : NSOperation

{
    NSArray *_overlayMaterialRequests;
    UIImage *_resizedSourceBackgroundImage;
    NSDictionary *_overlayMaterialImageByIdentifier;
    UIImage *_sourceBackgroundImage;
    struct CGSize _resizedBackgroundImageSize;
}

@property (retain, nonatomic) UIImage *sourceBackgroundImage;
@property (retain, nonatomic) UIImage *resizedSourceBackgroundImage;
@property (copy, nonatomic) NSDictionary *overlayMaterialImageByIdentifier;
@property (nonatomic) struct CGSize resizedBackgroundImageSize;
@property (copy, nonatomic) NSArray *overlayMaterialRequests;

- (id)init;
- (void)main;
- (id)initWithSourceBackgroundImage:(id)arg1;
- (id)_blurredMaterialImageWithSourceBackgroundImage:(id)arg1 forRect:(struct CGRect)arg2;

@end
