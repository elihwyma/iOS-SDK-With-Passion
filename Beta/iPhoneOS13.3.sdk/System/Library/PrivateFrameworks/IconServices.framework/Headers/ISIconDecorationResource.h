/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class ISIconDecoration, NSString;

@protocol ISScalableCompositorResource;

__attribute__((visibility("hidden")))
@interface ISIconDecorationResource : NSObject

{
    ISIconDecoration *_decoration;
    id <ISScalableCompositorResource> _internalResource;
}

@property (readonly) id <ISScalableCompositorResource> internalResource;
@property (readonly) ISIconDecoration *decoration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)configureWithType:(id)arg1;
- (id)initWithDecoration:(id)arg1;

@end
