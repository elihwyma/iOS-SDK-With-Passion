/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIGradientMaskProperties : NSObject

{
    struct CGSize _minLengths;
    struct UIEdgeInsets _minPadding;
}

@property (nonatomic) struct UIEdgeInsets minPadding;
@property (nonatomic) struct CGSize minLengths;

+ (id)defaultGradientMaskProperties;

@end
