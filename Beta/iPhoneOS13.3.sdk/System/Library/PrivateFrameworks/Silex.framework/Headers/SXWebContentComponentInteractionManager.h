/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentView;

@protocol SWInteractionProvider, SXComponentInteractionHandler, SXComponentInteractionHandlerManager, SXWebContentComponentInteractionHandlerFactory;

@interface SXWebContentComponentInteractionManager : NSObject

{
    SXComponentView *_componentView;
    id <SWInteractionProvider> _interactionProvider;
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
    id <SXWebContentComponentInteractionHandlerFactory> _componentInteractionHandlerFactory;
    id <SXComponentInteractionHandler> _currentInteractionHandler;
}

@property (weak, nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly) id <SWInteractionProvider> interactionProvider;
@property (weak, nonatomic, readonly) id <SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (nonatomic, readonly) id <SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory;
@property (retain, nonatomic) id <SXComponentInteractionHandler> currentInteractionHandler;

- (void)manageInteractionHandlerForInteraction:(id)arg1;
- (id)initWithComponentView:(id)arg1 interactionProvider:(id)arg2 interactionHandlerManager:(id)arg3 componentInteractionHandlerFactory:(id)arg4;

@end
