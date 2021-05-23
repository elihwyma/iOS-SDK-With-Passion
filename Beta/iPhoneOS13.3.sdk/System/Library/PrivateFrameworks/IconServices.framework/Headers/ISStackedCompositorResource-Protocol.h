/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/Swift-Protocol.h>

@class NSArray;

@protocol ISScalableCompositorResource;

@protocol ISStackedCompositorResource <Swift>

@property (readonly) NSArray<ISScalableCompositorResource> *resourceStack;

@end
