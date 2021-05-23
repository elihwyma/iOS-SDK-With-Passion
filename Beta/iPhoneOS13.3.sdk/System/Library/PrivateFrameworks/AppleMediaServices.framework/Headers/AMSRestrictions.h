/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSRestrictions : NSObject

+ (_Bool)explicitContentAllowed;
+ (_Bool)eroticaAllowed;
+ (_Bool)allowAccountModifications;
+ (_Bool)onDeviceDiagnosticsAllowed;

@end
