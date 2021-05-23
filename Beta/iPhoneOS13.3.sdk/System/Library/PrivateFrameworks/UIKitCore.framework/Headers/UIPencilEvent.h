/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface UIPencilEvent : UIEvent

{
    NSHashTable *_trackedInteractions;
}

@property (retain, nonatomic) NSHashTable *trackedInteractions;

- (long long)type;
- (id)_init;
- (long long)subtype;
- (id)collectAllActiveInteractions;
- (void)deregisterAllInteractionsForWindow:(id)arg1;
- (void)deregisterInteraction:(id)arg1;
- (void)_sendEventToInteractions;
- (void)registerInteraction:(id)arg1;

@end
