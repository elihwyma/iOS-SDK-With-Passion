/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSXPCInterface.h>

@interface NSXPCInterface (CX)

+ (id)cx_providerVendorInterface;
+ (id)cx_providerHostInterface;
+ (id)cx_callDirectoryProviderVendorInterface;
+ (id)cx_callDirectoryProviderHostInterface;
+ (id)cx_voicemailControllerVendorInterface;
+ (id)cx_voicemailControllerHostInterface;
+ (id)cx_callControllerHostInterface;
+ (id)cx_callControllerVendorInterface;
+ (id)cx_voicemailProviderHostInterface;
+ (id)cx_voicemailProviderVendorInterface;
+ (id)cx_callDirectoryManagerDefaultHostInterface;
+ (id)cx_callDirectoryManagerMaintenanceHostInterface;

- (void)cx_setAllowedClassesForProviderHostProtocol;
- (id)cx_allowedClasses;
- (void)cx_setAllowedClassesForProviderVendorProtocol;
- (id)_cx_providerAllowedClasses;
- (void)_cx_setAllowedClassesForCallControllerHostProtocol;
- (void)_cx_setAllowedClassesForCallControllerVendorProtocol;
- (id)_cx_callControllerAllowedClasses;
- (void)cx_setAllowedClassesForVoicemailProviderHostProtocol;
- (void)cx_setAllowedClassesForVoicemailProviderVendorProtocol;
- (id)_cx_voicemailProviderAllowedClasses;
- (void)_cx_setAllowedClassesForVoicemailControllerHostProtocol;
- (void)_cx_setAllowedClassesForVoicemailControllerVendorProtocol;
- (id)_cx_voicemailControllerAllowedClasses;
- (void)_cx_setAllowedClassesForCallDirectoryManagerDefaultHostProtocol;
- (id)_cx_callDirectoryManagerAllowedClasses;
- (void)_cx_setAllowedClassesForCallDirectoryProviderHostProtocol;
- (id)_cx_callDirectoryProviderAllowedClasses;

@end
