/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSFileLockPOSIX : NSObject

{
    int _fileDescriptor;
}

- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1;
- (void)releaseLock;

@end
