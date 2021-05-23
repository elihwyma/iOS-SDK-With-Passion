/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSExtensionContext.h>

@class NSObject;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _SFAppleConnectExtensionContext : NSExtensionContext

{
    NSObject<OS_dispatch_source> *_completeRequestSource;
    _Bool _presentingExtensionUI;
}

@property (nonatomic) _Bool presentingExtensionUI;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_completeRequest;
- (void)_completeRequestAfterDelay;
- (void)messageReceivedWithName:(id)arg1 userInfo:(id)arg2;

@end
