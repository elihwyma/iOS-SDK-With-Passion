/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UILabel;

@interface KeychainSyncSecurityCodeCell

{
    UILabel *_bulletTextLabel;
    int _securityCodeType;
    int _mode;
    NSString *_firstPasscodeEntry;
}

@property (nonatomic) int securityCodeType;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSString *firstPasscodeEntry;

- (void)layoutSubviews;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setBulletText:(id)arg1;

@end
