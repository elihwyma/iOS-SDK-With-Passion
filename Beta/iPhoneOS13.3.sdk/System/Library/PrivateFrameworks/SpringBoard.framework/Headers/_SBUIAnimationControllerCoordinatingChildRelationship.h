/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTransaction;

@protocol SBUIAnimationControllerCoordinating;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject

{
    BSTransaction<SBUIAnimationControllerCoordinating> *_coordinatingChildTransaction;
    unsigned long long _schedulingPolicy;
}

@property (nonatomic, readonly) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction;
@property (nonatomic, readonly) unsigned long long schedulingPolicy;

- (id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;

@end
