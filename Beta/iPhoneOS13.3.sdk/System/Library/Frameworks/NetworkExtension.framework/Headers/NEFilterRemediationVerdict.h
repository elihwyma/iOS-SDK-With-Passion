/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterVerdict.h>

@interface NEFilterRemediationVerdict : NEFilterVerdict

+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;

@end
