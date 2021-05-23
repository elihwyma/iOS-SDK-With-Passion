/*
 Image: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PlistProcessor : NSObject

+ (id)sharedPlistProcessor;

- (void)scanPlistsAtPath:(id)arg1 execBlock:(CDUnknownBlockType)arg2;
- (id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2;
- (_Bool)verifyPlist:(id)arg1 forMountPoint:(id)arg2;

@end
