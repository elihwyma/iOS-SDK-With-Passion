/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXFullscreenCaptionViewFactory, SXMediaSharingPolicyProvider, SXPresentationAttributesProvider;

@interface SXFullscreenCanvasControllerFactory : NSObject

{
    id <SXFullscreenCaptionViewFactory> _captionViewFactory;
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
}

@property (nonatomic, readonly) id <SXFullscreenCaptionViewFactory> captionViewFactory;
@property (nonatomic, readonly) id <SXPresentationAttributesProvider> presentationAttributesProvider;
@property (nonatomic, readonly) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fullscreenCanvasControllerForShowable:(id)arg1;
- (id)initWithCaptionViewFactory:(id)arg1 presentationAttributesProvider:(id)arg2 mediaSharingPolicyProvider:(id)arg3;

@end
