/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNDataAccessExpressSharedConnection : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedConnection;

- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
