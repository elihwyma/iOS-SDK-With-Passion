/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol BPSBuddyControllerDelegate;

@interface BPSSetupMiniFlowController : NSObject

{
    id <BPSBuddyControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <BPSBuddyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)viewController;
- (id)navigationController;
- (void)pushController:(id)arg1 animated:(_Bool)arg2;

@end
