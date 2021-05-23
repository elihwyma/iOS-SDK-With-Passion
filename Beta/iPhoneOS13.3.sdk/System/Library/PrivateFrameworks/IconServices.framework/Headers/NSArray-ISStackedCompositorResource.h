/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSArray.h>

@class NSString;

@protocol ISScalableCompositorResource;

@interface NSArray (ISStackedCompositorResource)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray<ISScalableCompositorResource> *resourceStack;

@end
