/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXTilingController;

@protocol NSObject;

@interface PXTilingControllerCompositionInvalidationContext : NSObject

{
    id <NSObject> _animationOptions;
    PXTilingController *_originatingTilingController;
}

@property (retain, nonatomic) id <NSObject> animationOptions;
@property (retain, nonatomic) PXTilingController *originatingTilingController;

+ (id)defaultAnimationOptionsForTilingController:(id)arg1 withInvalidationContexts:(id)arg2;

- (id)description;

@end
