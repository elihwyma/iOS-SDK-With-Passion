/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDInteractionStore;

@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject

{
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
    _CDInteractionStore *_interactionStore;
}

@property (weak, nonatomic, readonly) _CDInteractionStore *interactionStore;

- (void)dealloc;
- (id)initWithInteractionStore:(id)arg1;
- (void)recorded:(id)arg1;
- (void)deleted;
- (void)postPackedMechanisms:(unsigned long long)arg1;

@end
