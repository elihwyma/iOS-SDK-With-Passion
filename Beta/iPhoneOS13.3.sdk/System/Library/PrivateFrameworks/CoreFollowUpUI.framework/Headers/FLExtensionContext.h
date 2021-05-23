/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

#import <Foundation/NSExtensionContext.h>

#import <CoreFollowUpUI/Swift-Protocol.h>

@class NSString;

@interface FLExtensionContext : NSExtensionContext <Swift>

{
    id _shadowPrincipalObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)followUpPerformUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)hostContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_shadowPrincipalObject;
- (id)extensionLogicProvider;

@end
