/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@protocol DirectoryWatcherDelegate;

@interface DirectoryWatcher : NSObject

{
    id <DirectoryWatcherDelegate> delegate;
    int dirFD;
    int kq;
    struct __CFFileDescriptor *dirKQRef;
}

@property (nonatomic) id <DirectoryWatcherDelegate> delegate;

+ (id)watchFolderWithPath:(id)arg1 delegate:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)startMonitoringDirectory:(id)arg1;
- (void)kqueueFired;

@end
