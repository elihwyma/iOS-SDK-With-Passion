/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <Foundation/NSObject.h>

@interface MCManagedAssetManager : NSObject

+ (void)promptUserForiTunesAccount:(id)arg1 accountNameEditable:(_Bool)arg2 canCreateNewAccount:(_Bool)arg3 assertion:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)promptUserToLoginToiTunesIfNeededTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
