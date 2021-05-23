/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class LSApplicationWorkspace, NSString;

@interface _DKAppInstallMonitor : _DKMonitor

{
    CDUnknownBlockType historicalDeletingHandler;
    LSApplicationWorkspace *_appWorkspace;
}

@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType historicalDeletingHandler;

+ (id)entitlements;
+ (id)eventStream;
+ (id)_metadataFromProxy:(id)arg1 didInstall:(_Bool)arg2;
+ (id)_identifierFromProxy:(id)arg1;
+ (id)_dateFromProxy:(id)arg1;
+ (id)_eventWithAppProxy:(id)arg1 didInstall:(_Bool)arg2;

- (id)init;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)_applicationsDidChange:(id)arg1 didInstall:(_Bool)arg2;

@end
