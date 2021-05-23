/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

#import <CoreFollowUp/FLHeadlessExtensionLoader.h>

@class UIViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader

{
    UIViewController *_extensionViewController;
}

- (id)remoteViewController;
- (_Bool)_setupSessionIfNeeded:(id *)arg1;
- (void)_setupSessionWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
