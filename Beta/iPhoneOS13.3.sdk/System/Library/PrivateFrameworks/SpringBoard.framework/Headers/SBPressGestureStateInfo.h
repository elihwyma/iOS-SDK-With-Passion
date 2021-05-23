/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBPressGestureStateInfo : NSObject

{
    _Bool _isCoalescing;
    long long _state;
    double _expirationTime;
    long long _stateUponExpiration;
}

@property (nonatomic) long long state;
@property (nonatomic) _Bool isCoalescing;
@property (nonatomic) double expirationTime;
@property (nonatomic) long long stateUponExpiration;

- (id)init;

@end
