/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNQuickPropertyAction.h>

__attribute__((visibility("hidden")))
@interface CNQuickFaceTimeAction : CNQuickPropertyAction

{
    _Bool _audioOnly;
}

@property (nonatomic) _Bool audioOnly;

+ (id)defaultFaceTimeTitle;
+ (id)defaultFaceTimeAudioTitle;

- (id)identifier;
- (id)category;
- (unsigned long long)score;
- (id)_coreDuetValue;
- (id)_coreDuetInteractionMechanisms;
- (id)titleForContext:(long long)arg1;
- (id)subtitleForContext:(long long)arg1;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
