/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSSet, NSValue;

@protocol UIAvoidanceClientApplicator, UIAvoidanceClientDelegate;

@protocol UIAvoidanceClient <Swift>

@property (nonatomic, readonly) NSSet *blockades;
@property (retain, nonatomic) id <UIAvoidanceClientDelegate> avoidanceController;
@property (retain, nonatomic) id <UIAvoidanceClientApplicator> avoidanceApplicator;
@property (retain, nonatomic) NSValue *avoidancePosition;

- (unsigned short)addBlockadeWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBlockadeWithIdentifier: /* Error: Ran out of types for this method. */;

@end
