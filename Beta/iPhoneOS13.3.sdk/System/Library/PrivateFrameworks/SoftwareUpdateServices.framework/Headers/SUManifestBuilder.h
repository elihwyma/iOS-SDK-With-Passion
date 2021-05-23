/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@interface SUManifestBuilder : NSObject

+ (_Bool)isManifestRequiredForDescriptor:(id)arg1;
+ (id)manifestFromDescriptor:(id)arg1 outRequired:(_Bool *)arg2;

@end
