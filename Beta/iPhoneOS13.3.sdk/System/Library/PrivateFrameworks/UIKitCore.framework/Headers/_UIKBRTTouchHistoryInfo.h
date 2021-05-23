/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistoryInfo : NSObject

{
    _Bool _isLeftHand;
    _Bool _isActive;
    _Bool _ignoreForDrift;
    _Bool _ignoreTouch;
    id _touchIdentifier;
    double _touchTime;
    struct CGPoint _actualLocation;
    struct CGPoint _errorVector;
}

@property (retain, nonatomic) id touchIdentifier;
@property (nonatomic) double touchTime;
@property (nonatomic) struct CGPoint actualLocation;
@property (nonatomic) _Bool isLeftHand;
@property (nonatomic) _Bool isActive;
@property (nonatomic) _Bool ignoreForDrift;
@property (nonatomic) _Bool ignoreTouch;
@property (nonatomic) struct CGPoint errorVector;

- (id)init;
- (id)description;

@end
