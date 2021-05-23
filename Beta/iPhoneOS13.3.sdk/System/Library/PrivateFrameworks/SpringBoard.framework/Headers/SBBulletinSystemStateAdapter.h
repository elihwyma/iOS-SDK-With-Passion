/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBBulletinSystemStateAdapter : NSObject

{
    _Bool _quietModeEnabled;
}

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (id)init;
- (void)dealloc;
- (void)_lockStateChanged:(id)arg1;
- (void)_sendCurrentUILockedStatus;

@end
