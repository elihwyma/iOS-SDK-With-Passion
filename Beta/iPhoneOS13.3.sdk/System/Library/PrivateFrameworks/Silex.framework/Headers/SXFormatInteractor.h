/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDebugLayoutOptionsProviding, SXFormatInteractorDelegate, SXLayoutCoordinator, SXLayoutOptionsFactory, SXPresentationAttributesProvider, SXPresentationEnvironment, SXSubscriptionStatusProviding;

@interface SXFormatInteractor : NSObject

{
    _Bool _requestedContentHiding;
    id <SXFormatInteractorDelegate> _delegate;
    id <SXLayoutCoordinator> _layoutCoordinator;
    id <SXLayoutOptionsFactory> _layoutOptionsFactory;
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;
    id <SXSubscriptionStatusProviding> _subscriptionStatusProvider;
    id <SXPresentationEnvironment> _presentationEnvironment;
    id <SXDebugLayoutOptionsProviding> _debugLayoutOptionsProvider;
}

@property (nonatomic, readonly) id <SXLayoutCoordinator> layoutCoordinator;
@property (nonatomic, readonly) id <SXLayoutOptionsFactory> layoutOptionsFactory;
@property (nonatomic, readonly) id <SXPresentationAttributesProvider> presentationAttributesProvider;
@property (nonatomic, readonly) id <SXSubscriptionStatusProviding> subscriptionStatusProvider;
@property (weak, nonatomic) id <SXPresentationEnvironment> presentationEnvironment;
@property (nonatomic, readonly) id <SXDebugLayoutOptionsProviding> debugLayoutOptionsProvider;
@property (nonatomic) _Bool requestedContentHiding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXFormatInteractorDelegate> delegate;

- (void)updateWithPresentationEnvironment:(id)arg1;
- (void)debugLayoutOptionsDidChange:(id)arg1;
- (id)initWithLayoutCoordinator:(id)arg1 layoutOptionsFactory:(id)arg2 presentationAttributesProvider:(id)arg3 subscriptionStatusProvider:(id)arg4 debugLayoutOptionsProvider:(id)arg5;
- (void)layoutCoordinator:(id)arg1 willLayoutWithParameters:(id)arg2;
- (void)layoutCoordinator:(id)arg1 cancelledLayoutWithOptions:(id)arg2;
- (void)layoutCoordinator:(id)arg1 willIntegrateBlueprint:(id)arg2;
- (void)layoutCoordinator:(id)arg1 didIntegrateBlueprint:(id)arg2;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1;

@end
