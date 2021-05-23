/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBGuidedAccessListener : NSObject

{
    _Bool _isGuidedAccessActive;
}

@property (nonatomic) _Bool isGuidedAccessActive;

+ (id)sharedGuidedAccessListener;

- (id)init;
- (void)guidedAccessWasActivated;
- (void)guidedAccessWasDeactivated;

@end
