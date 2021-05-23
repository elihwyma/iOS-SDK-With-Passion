/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject

+ (void)configureMirroringRequestOptions:(id)arg1;
+ (id)createMirroringHandlerWithEnvironment:(id)arg1;
+ (id)currentContainerIdentifier;
+ (_Bool)manateeContainer:(id)arg1;
+ (_Bool)cloudKitMirroringEnabled;
+ (void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)configureStoreDescriptionForMirroring:(id)arg1 logger:(id)arg2;
+ (id)managedModelAttributesRequiredForMirroring;

@end
