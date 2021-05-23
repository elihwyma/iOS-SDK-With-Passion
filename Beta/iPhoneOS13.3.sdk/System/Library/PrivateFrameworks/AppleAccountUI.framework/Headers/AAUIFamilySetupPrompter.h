/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class FAFamilySetupPrompter, NSString;

@protocol AAUIFamilySetupPrompterDelegate;

@interface AAUIFamilySetupPrompter : NSObject

{
    FAFamilySetupPrompter *_familySetupPrompter;
    id <AAUIFamilySetupPrompterDelegate> _delegate;
}

@property (weak, nonatomic) id <AAUIFamilySetupPrompterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithiTunesAccount:(id)arg1;
- (void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(_Bool)arg2;
- (void)familySetupPrompterDidFinish:(id)arg1;

@end
