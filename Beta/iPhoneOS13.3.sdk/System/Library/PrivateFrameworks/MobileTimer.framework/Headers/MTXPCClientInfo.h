/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSXPCConnection;

@interface MTXPCClientInfo : NSObject

{
    NSXPCConnection *_connection;
    id _clientLink;
    NSDate *_connectedDate;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id clientLink;
@property (retain, nonatomic) NSDate *connectedDate;
@property (nonatomic, readonly) int processID;
@property (copy, nonatomic, readonly) NSString *processName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInfoForConnection:(id)arg1 clientLink:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)sourceIdentifier;
- (_Bool)donatesIntent;
- (id)initWithConnection:(id)arg1 clientLink:(id)arg2;

@end
