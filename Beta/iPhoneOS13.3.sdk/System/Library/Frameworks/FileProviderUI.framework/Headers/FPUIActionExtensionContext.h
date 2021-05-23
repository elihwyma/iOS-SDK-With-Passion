/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <Foundation/NSExtensionContext.h>

@class NSString, NSURL;

@interface FPUIActionExtensionContext : NSExtensionContext

{
    NSString *_domainIdentifier;
    NSURL *_initialURL;
}

@property (copy) NSString *domainIdentifier;
@property (copy) NSURL *initialURL;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRequestWithError:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_remoteContext;
- (void)completeRequestWithUserInfo:(id)arg1;
- (void)completeRequest;
- (void)didEncounterError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
