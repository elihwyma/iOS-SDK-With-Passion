/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFSecureDisplayCoordinator : NSObject

{
    _Bool _inSecureMode;
}

@property (nonatomic, getter=inSecureMode) _Bool secureMode;

- (void)setSecureMode:(_Bool)arg1 postNotification:(_Bool)arg2;

@end
