/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSExtension.h>

@interface NSExtension (RPExtensions)

+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 activationRule:(id)arg3 unwantedActivationRule:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)extensionsWithMatchingPointName:(id)arg1 baseIdentifier:(id)arg2 unwantedActivationRule:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)extensionsWithMatchingPointName:(id)arg1 activationRule:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)extensionsWithMatchingPointName:(id)arg1 unwantedActivationRule:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)extensionsWithMatchingPointName:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (long long)processMode;

@end
