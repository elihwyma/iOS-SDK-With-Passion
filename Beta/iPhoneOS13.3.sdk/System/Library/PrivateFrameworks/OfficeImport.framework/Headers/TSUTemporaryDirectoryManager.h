/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUTemporaryDirectoryManager : NSObject

{
    NSURL *_baseDirectoryURL;
}

+ (id)sharedManager;
+ (id)baseDirectoryURL;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2;
+ (Class)managedTemporaryDirectoryClass;

- (id)init;
- (id)newDirectoryWithFilename:(id)arg1;
- (id)_readDirectories;
- (void)_clearDirectories:(id)arg1;

@end
