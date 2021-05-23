/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterProvider.h>

@class NSDictionary, NSString;

@interface NEFilterControlProvider : NEFilterProvider

{
    NSDictionary *_remediationMap;
    NSDictionary *_URLAppendStringMap;
}

@property (copy) NSDictionary *remediationMap;
@property (copy) NSDictionary *URLAppendStringMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyRulesChanged;
- (void)handleRemediationForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
