/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBAuthenticationFeedback : NSObject

{
    unsigned long long result;
    _Bool _vibrate;
    _Bool _showPasscode;
    _Bool _jiggleLock;
    unsigned long long _result;
}

@property (nonatomic, readonly) unsigned long long result;
@property (nonatomic, readonly) _Bool showPasscode;
@property (nonatomic, readonly) _Bool hintFailureText;
@property (nonatomic, readonly) _Bool vibrate;
@property (nonatomic, readonly) _Bool jiggleLock;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initForFailureWithFailureSettings:(id)arg1;
- (id)initForSuccess;
- (id)initForFailureShowingPasscode:(_Bool)arg1;

@end
