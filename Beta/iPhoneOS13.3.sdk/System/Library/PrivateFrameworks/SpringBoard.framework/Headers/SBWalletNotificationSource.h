/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NCNotificationDispatcher, NSString;

@interface SBWalletNotificationSource : NSObject

{
    NCNotificationDispatcher *_dispatcher;
}

@property (retain, nonatomic) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDispatcher:(id)arg1;
- (void)postNotificationRequestForCardItem:(id)arg1;
- (void)modifyNotificationRequestForCardItem:(id)arg1;
- (void)withdrawNotificationRequestForCardItem:(id)arg1;

@end
