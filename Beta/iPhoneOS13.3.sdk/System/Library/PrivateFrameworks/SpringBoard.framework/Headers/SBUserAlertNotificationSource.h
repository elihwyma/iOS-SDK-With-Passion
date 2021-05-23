/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NCNotificationDispatcher, NSString;

@interface SBUserAlertNotificationSource : NSObject

{
    NCNotificationDispatcher *_dispatcher;
}

@property (retain, nonatomic) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDispatcher:(id)arg1;
- (_Bool)canPresentMultipleAlertItemsSimultaneously;
- (void)presentAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)presentsAlertItemsModally;

@end
