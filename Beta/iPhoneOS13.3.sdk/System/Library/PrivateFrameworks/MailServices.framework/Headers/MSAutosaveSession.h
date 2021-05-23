/*
 Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MSDAutosaveProtocol, MSDAutosaveSessionProtocol;

@interface MSAutosaveSession : NSObject

{
    NSString *_autosaveIdentifier;
    id <MSDAutosaveSessionProtocol> _remoteSession;
    id <MSDAutosaveProtocol> _remoteService;
}

@property (retain, nonatomic) id <MSDAutosaveSessionProtocol> remoteSession;
@property (retain, nonatomic) id <MSDAutosaveProtocol> remoteService;
@property (copy, nonatomic, readonly) NSString *autosaveIdentifier;

+ (id)log;

- (id)initWithIdentifier:(id)arg1 remoteSession:(id)arg2 remoteService:(id)arg3;
- (void)didReconnectRemoteSession:(id)arg1 remoteService:(id)arg2;
- (void)remoteSessionDisconnectedWithError:(id)arg1;

@end
