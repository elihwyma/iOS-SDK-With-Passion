/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKPlayerStateChangeEventUserInfo.h>

@interface IKPlayerShouldHandleStateChangeEventUserInfo : IKPlayerStateChangeEventUserInfo

{
    _Bool _shouldHandle;
    double _requestedTime;
    double _proposedTime;
}

@property (nonatomic, readonly) double requestedTime;
@property (nonatomic, readonly) _Bool shouldHandle;
@property (nonatomic, readonly) double proposedTime;

- (id)initWithState:(long long)arg1;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;
- (id)initWithState:(long long)arg1 requestedTime:(double)arg2;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2 requestedTime:(double)arg3;

@end
