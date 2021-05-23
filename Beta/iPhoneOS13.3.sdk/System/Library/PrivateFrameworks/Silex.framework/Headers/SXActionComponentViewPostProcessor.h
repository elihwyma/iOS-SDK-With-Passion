/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXActionComponentInteractionHandlerFactory, SXActionProvider, SXComponentInteractionHandlerManager;

@interface SXActionComponentViewPostProcessor : NSObject

{
    id <SXActionProvider> _actionProvider;
    id <SXActionComponentInteractionHandlerFactory> _factory;
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
}

@property (nonatomic, readonly) id <SXActionProvider> actionProvider;
@property (nonatomic, readonly) id <SXActionComponentInteractionHandlerFactory> factory;
@property (nonatomic, readonly) id <SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)initWithActionProvider:(id)arg1 interactionHandlerFactory:(id)arg2 interactionHandlerManager:(id)arg3;

@end
