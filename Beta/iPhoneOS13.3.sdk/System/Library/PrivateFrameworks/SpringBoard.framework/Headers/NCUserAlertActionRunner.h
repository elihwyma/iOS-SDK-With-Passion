/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBAlertItem;

@interface NCUserAlertActionRunner : NSObject

{
    _Bool _shouldForwardAction;
    SBAlertItem *_alertItem;
}

@property (weak, nonatomic, readonly) SBAlertItem *alertItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldForwardAction;

- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithSBAlertItem:(id)arg1;

@end
