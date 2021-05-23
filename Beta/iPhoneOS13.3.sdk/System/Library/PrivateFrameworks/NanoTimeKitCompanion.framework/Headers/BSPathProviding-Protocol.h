/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSURL;

@protocol BSPathProviding <Swift>

@property (nonatomic, readonly) NSURL *defaultPath;
@property (nonatomic, readonly) NSURL *libraryPath;
@property (nonatomic, readonly) NSURL *cachesPath;

@end
