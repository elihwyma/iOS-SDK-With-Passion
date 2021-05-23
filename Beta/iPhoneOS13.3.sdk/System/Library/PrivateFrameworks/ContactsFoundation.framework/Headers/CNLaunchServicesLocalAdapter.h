/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class LSApplicationWorkspace;

@interface CNLaunchServicesLocalAdapter : NSObject

{
    LSApplicationWorkspace *_workspace;
}

@property (retain, nonatomic) LSApplicationWorkspace *workspace;

+ (id)lsApplicationWorkspaceForBundleId:(id)arg1;

- (void)applicationsForUserActivityType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)initWithApplicationWorkspace:(id)arg1;

@end
