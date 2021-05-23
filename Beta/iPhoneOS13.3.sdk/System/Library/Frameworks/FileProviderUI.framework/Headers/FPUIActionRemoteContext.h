/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol FPUIActionRemoteContextDelegate;

@interface FPUIActionRemoteContext : NSExtensionContext

{
    id <FPUIActionRemoteContextDelegate> _delegate;
}

@property (weak, nonatomic) id <FPUIActionRemoteContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_completeRequestWithUserInfo:(id)arg1 error:(id)arg2;
- (void)_didEncounterError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_openExtensionURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
