/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class ClientConnection;

__attribute__((visibility("hidden")))
@interface CADOperationGroup : NSObject

{
    ClientConnection *_conn;
}

@property (nonatomic, readonly) ClientConnection *conn;

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;
+ (id)whitelistedBundles;

- (id)initWithClientConnection:(id)arg1;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
