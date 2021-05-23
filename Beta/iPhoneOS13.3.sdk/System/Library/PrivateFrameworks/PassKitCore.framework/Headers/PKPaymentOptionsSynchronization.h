/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject

{
    _Bool _shouldSyncToCloud;
    id <PKPaymentOptionsSynchronizationDelegate> _delegate;
}

@property (nonatomic) _Bool shouldSyncToCloud;
@property (weak, nonatomic) id <PKPaymentOptionsSynchronizationDelegate> delegate;

- (id)init;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_updateSynchronizationBehavior;

@end
