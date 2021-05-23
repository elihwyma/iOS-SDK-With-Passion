/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SplashBoard/XBSnapshotDataProviderContext.h>

@class NSString;

@interface SBSnapshotDataProviderContext : XBSnapshotDataProviderContext

{
    NSString *_sceneID;
}

@property (copy, nonatomic) NSString *sceneID;

@end
