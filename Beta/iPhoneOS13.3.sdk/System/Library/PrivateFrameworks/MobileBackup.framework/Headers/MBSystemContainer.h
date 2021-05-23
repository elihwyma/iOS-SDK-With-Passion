/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/MBContainer.h>

@interface MBSystemContainer : MBContainer

+ (id)systemContainerWithPropertyList:(id)arg1;
+ (id)systemContainerWithDomainName:(id)arg1 containerDir:(id)arg2 isShared:(_Bool)arg3;

- (id)domain;

@end
