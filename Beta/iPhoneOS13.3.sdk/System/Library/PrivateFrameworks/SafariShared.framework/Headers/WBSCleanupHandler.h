/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSCleanupHandler : NSObject

{
    CDUnknownBlockType _block;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
