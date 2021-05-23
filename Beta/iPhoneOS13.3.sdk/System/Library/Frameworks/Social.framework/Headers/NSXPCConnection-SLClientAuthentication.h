/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (SLClientAuthentication)

- (id)_clientBundleID;
- (id)sl_localizedClientName;
- (_Bool)sl_clientHasEntitlement:(id)arg1;

@end
