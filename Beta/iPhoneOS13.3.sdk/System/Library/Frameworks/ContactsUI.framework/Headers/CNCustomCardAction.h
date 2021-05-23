/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactTargetActionWrapper, NSString;

__attribute__((visibility("hidden")))
@interface CNCustomCardAction : NSObject

{
    _Bool _destructive;
    NSString *_title;
    CNContactTargetActionWrapper *_targetActionWrapper;
    NSString *_contactIdentifier;
    long long _placement;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) CNContactTargetActionWrapper *targetActionWrapper;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) long long placement;
@property (nonatomic, readonly, getter=isDestructive) _Bool destructive;

+ (long long)placementForGroup:(id)arg1 inContactContentViewController:(id)arg2;
+ (id)groupForActionGivenPlacement:(long long)arg1 inContactContentViewController:(id)arg2;

- (id)initWithTitle:(id)arg1 targetActionWrapper:(id)arg2 contactIdentifier:(id)arg3 placement:(long long)arg4 isDesctructive:(_Bool)arg5;
- (_Bool)isValidForContact:(id)arg1;
- (_Bool)matchesTarget:(id)arg1 selector:(SEL)arg2 group:(id)arg3 inContactContentViewController:(id)arg4;

@end
