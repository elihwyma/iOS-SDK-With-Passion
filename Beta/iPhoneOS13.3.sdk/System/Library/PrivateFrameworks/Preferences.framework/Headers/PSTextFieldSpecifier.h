/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSTextFieldSpecifier

{
    SEL bestGuess;
    NSString *_placeholder;
}

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)specifierWithSpecifier:(id)arg1;

- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (_Bool)isEqualToSpecifier:(id)arg1;

@end
