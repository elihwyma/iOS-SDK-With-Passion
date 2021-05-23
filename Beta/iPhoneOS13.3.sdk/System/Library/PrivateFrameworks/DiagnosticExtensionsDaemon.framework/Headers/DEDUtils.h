/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@interface DEDUtils : NSObject

+ (id)osBuild;
+ (_Bool)isInternalInstall;
+ (id)systemName;
+ (id)osVersion;
+ (id)sharedLog;

@end
