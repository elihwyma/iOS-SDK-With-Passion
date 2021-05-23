/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface SBViewSnapshotProvider : NSObject

{
    UIView *_view;
    long long _orientation;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (id)snapshot;
- (void)snapshotAsynchronously:(_Bool)arg1 withImageBlock:(CDUnknownBlockType)arg2;
- (id)initWithView:(id)arg1 orientation:(long long)arg2;
- (void)snapshotWithImageBlock:(CDUnknownBlockType)arg1;

@end
