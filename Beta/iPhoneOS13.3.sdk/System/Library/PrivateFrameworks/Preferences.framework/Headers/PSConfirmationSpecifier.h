/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSConfirmationSpecifier

{
    NSString *_title;
    NSString *_prompt;
    NSString *_okButton;
    NSString *_cancelButton;
    NSString *_alternateButton;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *okButton;
@property (retain, nonatomic) NSString *alternateButton;
@property (retain, nonatomic) NSString *cancelButton;

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)specifierWithSpecifier:(id)arg1;

- (_Bool)isDestructive;
- (_Bool)isAlternateDestructive;
- (_Bool)isEqualToSpecifier:(id)arg1;
- (void)setupWithDictionary:(id)arg1;

@end
