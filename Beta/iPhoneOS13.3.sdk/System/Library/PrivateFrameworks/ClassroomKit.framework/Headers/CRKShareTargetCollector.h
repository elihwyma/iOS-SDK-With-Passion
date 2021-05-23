/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol CRKShareTargetCollectorDelegate;

@interface CRKShareTargetCollector : NSObject

{
    id <CRKShareTargetCollectorDelegate> _delegate;
    NSSet *_studentTargets;
    NSSet *_instructorTargets;
}

@property (copy, nonatomic) NSSet *studentTargets;
@property (copy, nonatomic) NSSet *instructorTargets;
@property (weak, nonatomic) id <CRKShareTargetCollectorDelegate> delegate;

- (id)init;
- (void)studentTargetsDidChange:(id)arg1;
- (void)instructorTargetsDidChange:(id)arg1;
- (void)diffNewTargets:(id)arg1 againstOldTargets:(id)arg2;
- (void)didFindTargets:(id)arg1;
- (void)didRemoveTargets:(id)arg1;

@end
