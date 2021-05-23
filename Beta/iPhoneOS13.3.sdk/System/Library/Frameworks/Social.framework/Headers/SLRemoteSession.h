/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, SLDatabase;

@interface SLRemoteSession : NSObject

{
    NSXPCConnection *_connection;
    SLDatabase *_database;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) SLDatabase *database;

- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (_Bool)clientHasEntitlement:(id)arg1;

@end
