/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBluetoothMonitor : _DKMonitor

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)arg1 name:(id)arg2 address:(id)arg3 type:(int)arg4 isAppleAudioDevice:(_Bool)arg5 productID:(unsigned int)arg6;
+ (id)contextValueForBluetoothConnectionStatus:(_Bool)arg1 name:(id)arg2 address:(id)arg3 deviceType:(int)arg4 isAppleAudioDevice:(_Bool)arg5 productID:(unsigned int)arg6;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;

@end
