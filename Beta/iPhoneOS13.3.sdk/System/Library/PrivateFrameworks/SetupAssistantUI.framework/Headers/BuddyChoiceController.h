/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <OnBoardingKit/OBSplashController.h>

@class NSArray, NSString;

@protocol BFFFlowItemDelegate;

__attribute__((visibility("hidden")))
@interface BuddyChoiceController : OBSplashController

{
    id <BFFFlowItemDelegate> _delegate;
    NSArray *_choices;
}

@property (weak, nonatomic) id <BFFFlowItemDelegate> delegate;
@property (copy, nonatomic) NSArray *choices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cloudConfigSkipKey;

- (void)_tappedChoice:(id)arg1;
- (void)didSelectChoice:(id)arg1;

@end
