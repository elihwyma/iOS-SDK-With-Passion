/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface NTKSnapshotCachePathProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *defaultPath;
@property (nonatomic, readonly) NSURL *libraryPath;
@property (nonatomic, readonly) NSURL *cachesPath;

@end
