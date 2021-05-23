/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface RERemoteTrainingServer : NSObject

{
    NSXPCConnection *_connection;
    NSString *_processName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_clearConnection;
- (void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTargetProcessName:(id)arg1;
- (void)_queue_setupConnectionIfNeeded;

@end
