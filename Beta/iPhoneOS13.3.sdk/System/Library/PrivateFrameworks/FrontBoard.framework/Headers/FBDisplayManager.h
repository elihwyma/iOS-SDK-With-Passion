/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/FBSDisplayMonitor.h>

@class FBSDisplayConfiguration;

@interface FBDisplayManager : FBSDisplayMonitor

@property (copy, nonatomic, readonly) FBSDisplayConfiguration *mainDisplay;

+ (id)sharedInstance;
+ (id)mainDisplay;
+ (id)mainIdentity;
+ (id)mainConfiguration;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)postBookendConnections;

@end
