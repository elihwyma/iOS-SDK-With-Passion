/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class LSApplicationWorkspace, NSString;

@interface CNUIUserActionWorkspaceURLOpener : NSObject

{
    LSApplicationWorkspace *_workspace;
}

@property (nonatomic, readonly) LSApplicationWorkspace *workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)urlCouldNotBeOpenedErrorWithURL:(id)arg1;
+ (id)openConfigurationWithEndpoint:(id)arg1 isSensitive:(_Bool)arg2;

- (id)init;
- (id)initWithWorkspace:(id)arg1;
- (id)openURL:(id)arg1 isSensitive:(_Bool)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4;
- (id)openURL:(id)arg1 isSensitive:(_Bool)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;

@end
