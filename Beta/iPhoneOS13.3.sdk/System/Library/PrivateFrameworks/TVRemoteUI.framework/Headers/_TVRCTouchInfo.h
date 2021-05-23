/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@interface _TVRCTouchInfo : NSObject

{
    _Bool _pendingCancellation;
    _Bool _isLikelyLongListScrollingEdgeGesture;
    long long _virtualPhase;
    double _timestamp;
    double _previousTimestamp;
    struct CGPoint _initialLocation;
    struct CGPoint _initialProportionalLocation;
    struct CGRect _boundingBox;
}

@property (nonatomic) long long virtualPhase;
@property (nonatomic) _Bool pendingCancellation;
@property (nonatomic) struct CGPoint initialLocation;
@property (nonatomic) struct CGRect boundingBox;
@property (nonatomic) struct CGPoint initialProportionalLocation;
@property (nonatomic) _Bool isLikelyLongListScrollingEdgeGesture;
@property (nonatomic) double timestamp;
@property (nonatomic) double previousTimestamp;

- (id)description;

@end
