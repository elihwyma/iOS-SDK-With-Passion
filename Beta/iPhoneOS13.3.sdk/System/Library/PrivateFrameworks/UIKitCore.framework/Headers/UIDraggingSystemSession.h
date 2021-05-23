/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIDraggingSystemSessionInfo, UIDraggingSystemTouchRoutingPolicy;

@protocol _DUIServerSessionSystemApp;

@interface UIDraggingSystemSession : NSObject

{
    _Bool _commandeered;
    UIDraggingSystemSessionInfo *_info;
    UIDraggingSystemTouchRoutingPolicy *_routingPolicy;
    id <_DUIServerSessionSystemApp> _serverSession;
}

@property (retain, nonatomic) UIDraggingSystemSessionInfo *info;
@property (retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy;
@property (retain, nonatomic, getter=_serverSession) id <_DUIServerSessionSystemApp> serverSession;
@property (nonatomic, getter=isCommandeered) _Bool commandeered;

- (unsigned long long)_indexOfDragItemInSession:(id)arg1;
- (void)commandeerImmediately;
- (void)loadURLForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadUserActivityForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
