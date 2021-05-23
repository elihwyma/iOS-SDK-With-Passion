/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface SFUnlockState : NSObject

{
    NSNumber *_unlockEnabled;
    NSNumber *_remotePasscodeEnabled;
}

@property (readonly) NSNumber *unlockEnabled;
@property (readonly) NSNumber *remotePasscodeEnabled;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnlockEnabled:(id)arg1 remotePasscodeEnabled:(id)arg2;

@end
