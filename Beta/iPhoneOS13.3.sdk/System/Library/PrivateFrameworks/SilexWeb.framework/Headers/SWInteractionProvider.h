/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SWInteraction, SWInteractionFactory, SWLogger;

@interface SWInteractionProvider : NSObject

{
    id <SWInteraction> _interaction;
    id <SWInteractionFactory> _interactionFactory;
    id <SWLogger> _logger;
    NSMutableArray *_blocks;
}

@property (nonatomic, readonly) id <SWInteractionFactory> interactionFactory;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (nonatomic, readonly) NSMutableArray *blocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SWInteraction> interaction;

- (void)onChange:(CDUnknownBlockType)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithMessageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 interactionFactory:(id)arg3 logger:(id)arg4;

@end
