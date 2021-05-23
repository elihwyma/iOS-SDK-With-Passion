/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXMediaSharingPolicyProvider;

@interface SXQuickLookPreviewViewControllerFactory : NSObject

{
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
}

@property (nonatomic, readonly) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2;
- (id)initWithMediaSharingPolicyProvider:(id)arg1;

@end
