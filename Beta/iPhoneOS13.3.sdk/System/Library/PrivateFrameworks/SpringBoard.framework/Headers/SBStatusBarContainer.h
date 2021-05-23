/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, UIStatusBar;

@interface SBStatusBarContainer : NSObject

{
    UIStatusBar *_statusBar;
    NSString *_reason;
}

@property (weak, nonatomic) UIStatusBar *statusBar;
@property (retain, nonatomic) NSString *reason;

- (void)dealloc;
- (id)description;

@end
