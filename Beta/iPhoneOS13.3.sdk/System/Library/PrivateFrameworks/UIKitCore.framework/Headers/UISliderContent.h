/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UISliderContent : NSObject

{
    UIImage *_thumb;
    UIImage *_minTrack;
    UIImage *_maxTrack;
}

@property (retain, nonatomic) UIImage *thumb;
@property (retain, nonatomic) UIImage *minTrack;
@property (retain, nonatomic) UIImage *maxTrack;
@property (nonatomic, readonly) _Bool isEmpty;

@end
