/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface UIViewPropertyAnimatorTrackingState : NSObject

{
    _Bool _startPaused;
    _Bool _scrubsLinearly;
    _Bool _userInteractionEnabled;
    _Bool _optimizationsEnabled;
    _Bool _shouldLayoutSubviews;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic) _Bool startPaused;
@property (nonatomic) _Bool scrubsLinearly;
@property (nonatomic) _Bool userInteractionEnabled;
@property (nonatomic) _Bool optimizationsEnabled;
@property (nonatomic) _Bool shouldLayoutSubviews;

- (id)init;

@end
