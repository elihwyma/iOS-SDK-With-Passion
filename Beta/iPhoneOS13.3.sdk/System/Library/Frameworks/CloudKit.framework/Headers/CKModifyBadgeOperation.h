/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation

{
    CDUnknownBlockType _modifyBadgeCompletionBlock;
    unsigned long long _badgeValue;
}

@property (nonatomic) unsigned long long badgeValue;
@property (copy, nonatomic) CDUnknownBlockType modifyBadgeCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (id)initWithBadgeValue:(unsigned long long)arg1;

@end
