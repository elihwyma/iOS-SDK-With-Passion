/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBLockStateAggregator : NSObject

{
    unsigned long long _lockState;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)lockState;
- (void)_updateLockState;
- (_Bool)hasAnyLockState;
- (id)_descriptionForLockState:(unsigned long long)arg1;

@end
