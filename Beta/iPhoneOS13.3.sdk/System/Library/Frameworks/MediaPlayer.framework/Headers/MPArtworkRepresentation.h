/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface MPArtworkRepresentation : NSObject

{
    UIImage *_image;
    id _representationToken;
    struct CGSize _representationSize;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize representationSize;
@property (retain, nonatomic) id representationToken;

+ (id)representationWithSize:(struct CGSize)arg1 image:(id)arg2;

- (id)debugQuickLookObject;

@end
