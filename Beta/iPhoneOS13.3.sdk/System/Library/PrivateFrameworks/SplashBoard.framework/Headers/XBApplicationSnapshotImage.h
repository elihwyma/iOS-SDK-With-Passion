/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <UIKit/UIImage.h>

@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage

{
    XBApplicationSnapshot *_snapshot;
    long long _interfaceOrientation;
}

@property (nonatomic, readonly) long long interfaceOrientation;

- (void)dealloc;
- (id)description;
- (id)initWithSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;

@end
