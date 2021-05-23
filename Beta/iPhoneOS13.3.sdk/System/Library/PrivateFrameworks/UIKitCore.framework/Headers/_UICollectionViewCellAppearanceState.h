/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionViewCellAppearanceState : NSObject

{
    _Bool _hasLifted;
    _Bool _hasBeganCancelling;
    int _dragState;
}

@property (nonatomic) int dragState;
@property (nonatomic) _Bool hasLifted;
@property (nonatomic) _Bool hasBeganCancelling;
@property (nonatomic, readonly) long long appearance;
@property (nonatomic, readonly) _Bool hasBeganDroppingInto;
@property (nonatomic, readonly) _Bool enrouteToOrReachedTerminalState;

- (id)init;
- (id)description;
- (void)didEnd;
- (void)didBeginLift;
- (void)didCompleteLift;
- (void)willBeginCancelling;
- (void)didCompleteCancelling;
- (void)didBeginCancelling;
- (void)didBeginDropping;
- (void)didCompleteDropping;
- (void)didBeginDroppingInto;
- (void)didMove;

@end
