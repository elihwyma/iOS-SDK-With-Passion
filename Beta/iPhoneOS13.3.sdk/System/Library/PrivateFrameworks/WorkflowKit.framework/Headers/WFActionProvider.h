/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@protocol WFActionProviderDelegate;

@interface WFActionProvider : NSObject

{
    id <WFActionProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <WFActionProviderDelegate> delegate;

- (void)updateCache:(CDUnknownBlockType)arg1;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1;
- (void)deleteCache;
- (id)createAllAvailableActions;

@end
