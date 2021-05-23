/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MBFileManagerDelegate : NSObject

{
    CDUnknownBlockType _shouldCopyItemAtPathToPath;
}

@property (copy, nonatomic) CDUnknownBlockType shouldCopyItemAtPathToPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;

@end
