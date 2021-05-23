/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSOperation.h>

@class NSError, NSObject, NSURL, UIImage;

@protocol OS_dispatch_group;

@interface MPArtworkResizeOperation : NSOperation

{
    _Bool _usesExactFittingSizeAsDestinationSize;
    UIImage *_resizedImage;
    NSError *_error;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_group> *_operationGroup;
    UIImage *_image;
    struct CGSize _scaledFittingSize;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize scaledFittingSize;
@property (nonatomic) _Bool usesExactFittingSizeAsDestinationSize;
@property (nonatomic, readonly) UIImage *resizedImage;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *operationGroup;

- (void)main;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 destinationURL:(id)arg3;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(_Bool)arg3 destinationURL:(id)arg4;
- (struct CGSize)_resizedScaledSizeForScaledImageSize:(struct CGSize)arg1 scaledFittingSize:(struct CGSize)arg2;

@end
