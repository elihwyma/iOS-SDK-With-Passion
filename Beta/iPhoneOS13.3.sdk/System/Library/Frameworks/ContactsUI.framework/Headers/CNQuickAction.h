/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactStyle, CNQuickActionsManager, NSString, UIColor, UIImage, UIView;

@interface CNQuickAction : NSObject

{
    _Bool _useDuetIfAvailable;
    _Bool _isLongPress;
    _Bool _enabled;
    _Bool _cached;
    _Bool _dismissesWithAnimation;
    NSString *_title;
    NSString *_category;
    UIColor *_imageTintColor;
    CNQuickActionsManager *_manager;
    NSString *_identifier;
    UIImage *_image;
    UIView *_sourceView;
    unsigned long long _score;
    CDUnknownBlockType _performBlock;
    CNContactStyle *_previousStyle;
}

@property (nonatomic, getter=isBackAction) _Bool backAction;
@property (nonatomic) _Bool enabled;
@property (weak, nonatomic) CNQuickActionsManager *manager;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSString *globalIdentifier;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) _Bool cached;
@property (nonatomic) _Bool dismissesWithAnimation;
@property (nonatomic) unsigned long long score;
@property (copy, nonatomic) CDUnknownBlockType performBlock;
@property (retain, nonatomic) CNContactStyle *previousStyle;
@property (nonatomic) _Bool useDuetIfAvailable;
@property (nonatomic) _Bool isLongPress;
@property (retain, nonatomic) UIColor *imageTintColor;

+ (_Bool)reallyPerform;
+ (id)defaultTitleForActionInCategory:(id)arg1 context:(long long)arg2;
+ (id)possibleTitlesForActionsInCategories:(id)arg1 context:(long long)arg2;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 block:(CDUnknownBlockType)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)cancel;
- (void)perform;
- (id)_coreDuetValue;
- (id)_coreDuetInteractionMechanisms;
- (id)titleForContext:(long long)arg1;
- (id)subtitleForContext:(long long)arg1;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)matchesDuetInteraction:(id)arg1;
- (id)imageForContext:(long long)arg1;
- (id)defaultTitleForContext:(long long)arg1;
- (id)userActionType;

@end
