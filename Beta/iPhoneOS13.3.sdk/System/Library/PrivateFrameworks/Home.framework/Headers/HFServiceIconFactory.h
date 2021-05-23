/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFServiceIconFactory : NSObject

+ (id)iconDescriptorForAccessory:(id)arg1;
+ (id)_multiSubtypeIconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)defaultIconDescriptorForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)_iconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)iconDescriptorWithIdentifier:(id)arg1 forServiceType:(id)arg2 serviceSubtype:(id)arg3;
+ (id)_replacementIdentifierForIconIdentifier:(id)arg1;
+ (id)allIconDescriptorsForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)iconDescriptorForAccessoryCategoryType:(id)arg1;
+ (id)defaultIconDescriptorForService:(id)arg1;
+ (id)iconDescriptorWithIdentifier:(id)arg1 forService:(id)arg2;
+ (id)allIconDescriptorsForService:(id)arg1;
+ (id)overrideIconDescriptorForMultiServiceAccessory:(id)arg1 iconDescriptor:(id)arg2;
+ (id)iconDescriptorForAccessoryCategory:(id)arg1;
+ (id)iconModifiersForService:(id)arg1;

@end
