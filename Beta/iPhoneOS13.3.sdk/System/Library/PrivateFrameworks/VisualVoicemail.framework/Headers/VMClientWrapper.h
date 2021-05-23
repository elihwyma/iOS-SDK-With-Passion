/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol VMClientXPCProtocol;

@interface VMClientWrapper : NSObject

{
    NSXPCConnection *_clientConnection;
    id <VMClientXPCProtocol> _manager;
}

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (weak, nonatomic) id <VMClientXPCProtocol> manager;

+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;
+ (_Bool)isVMXPCAvailable;

- (id)init;
- (void)dealloc;

@end
