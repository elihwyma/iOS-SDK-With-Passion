/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/Swift-Protocol.h>

@protocol ISCompositorRecipe, ISCompositorResourceProvider;

@protocol ISCompositorElement <Swift>

@property (readonly) id <ISCompositorRecipe> recipe;
@property (readonly) id <ISCompositorResourceProvider> resourceProvider;

@end
