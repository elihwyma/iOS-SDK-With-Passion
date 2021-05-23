/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/FBProcess.h>

@interface FBProcess (SBHelpers)

- (id)sb_bundleIdentifierWithFallback;
- (_Bool)sb_isProbablyUIApplication;

@end
