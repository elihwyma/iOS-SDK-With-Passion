/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SBStarkNotificationsConfiguring, SBUIBannerTarget;

@interface SBStarkBannerSource : NSObject

{
    id <SBStarkNotificationsConfiguring> _configuration;
    void *_allowedTargetIdentifier;
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
}

@property (nonatomic, readonly) id <SBStarkNotificationsConfiguring> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)newBannerViewForContext:(id)arg1;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;
- (unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enqueueItem:(id)arg1;
- (id)indexesOfEnqueuedItemsMatchingContext:(id)arg1;
- (void)removeEnqueuedItemsAtIndexes:(id)arg1;
- (id)currentItemFromTarget;
- (void)dismissCurrentItemFromTarget;

@end
