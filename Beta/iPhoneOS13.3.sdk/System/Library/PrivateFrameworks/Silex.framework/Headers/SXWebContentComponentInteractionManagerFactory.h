/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWInteractionProvider, SXComponentInteractionHandlerManager, SXWebContentComponentInteractionHandlerFactory;

@interface SXWebContentComponentInteractionManagerFactory : NSObject

{
    id <SWInteractionProvider> _interactionProvider;
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
    id <SXWebContentComponentInteractionHandlerFactory> _componentInteractionHandlerFactory;
}

@property (nonatomic, readonly) id <SWInteractionProvider> interactionProvider;
@property (nonatomic, readonly) id <SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (nonatomic, readonly) id <SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)interactionManagerForComponentView:(id)arg1;
- (id)initWithInteractionProvider:(id)arg1 interactionHandlerManager:(id)arg2 componentInteractionHandlerFactory:(id)arg3;

@end
