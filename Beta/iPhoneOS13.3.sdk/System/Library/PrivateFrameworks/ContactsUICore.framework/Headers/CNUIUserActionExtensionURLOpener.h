/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSExtensionContext, NSString;

@interface CNUIUserActionExtensionURLOpener : NSObject

{
    NSExtensionContext *_extensionContext;
}

@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithExtensionContext:(id)arg1;
- (id)openURL:(id)arg1 isSensitive:(_Bool)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4;
- (id)openURL:(id)arg1 isSensitive:(_Bool)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;

@end
