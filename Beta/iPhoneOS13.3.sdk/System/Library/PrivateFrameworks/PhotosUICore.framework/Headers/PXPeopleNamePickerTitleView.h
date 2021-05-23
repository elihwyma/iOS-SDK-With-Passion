/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, PHPerson, UIFont, UIImageView, UITextField;

@interface PXPeopleNamePickerTitleView : UIView

{
    UITextField *_nameField;
    NSString *_localizedName;
    UIFont *_nameFont;
    NSString *_placeholder;
    UIFont *_placeholderFont;
    NSMutableArray *_fetchResults;
    UIImageView *_avatarView;
    PHPerson *_person;
}

@property (retain, nonatomic) NSMutableArray *fetchResults;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) PHPerson *person;
@property (nonatomic, readonly) UITextField *nameField;
@property (copy, nonatomic) NSString *localizedName;
@property (retain, nonatomic) UIFont *nameFont;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIFont *placeholderFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)finishEditing;
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2;
- (void)resetImages;
- (void)_updateFieldText;
- (void)_updateFieldPlaceholder;

@end
