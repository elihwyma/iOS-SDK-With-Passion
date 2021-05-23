/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject

{
    NSXPCConnection *_daemonConnection;
}

@property (nonatomic, readonly) NSXPCConnection *daemonConnection;

+ (id)daemonConnection;
+ (id)daemonAgentConnection;

- (id)init;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)reportsNotYetSubmittedWithReply:(CDUnknownBlockType)arg1;
- (void)retireReports:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end
