/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterProvider.h>

@class NSString;

@interface NEFilterDataProvider : NEFilterProvider

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)handleNewFlow:(id)arg1;
- (void)handleRulesChanged;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleInboundDataCompleteForFlow:(id)arg1;
- (id)handleOutboundDataCompleteForFlow:(id)arg1;
- (id)handleRemediationForFlow:(id)arg1;
- (void)resumeFlow:(id)arg1 withVerdict:(id)arg2;

@end
