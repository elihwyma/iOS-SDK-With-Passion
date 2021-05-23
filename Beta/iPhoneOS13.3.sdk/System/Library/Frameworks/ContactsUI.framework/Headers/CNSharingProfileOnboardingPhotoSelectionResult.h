/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject

{
    _Bool _wasSelectedInFullPhotoPicker;
    UIImage *_originalImage;
    UIImage *_compositedImage;
    NSString *_variantName;
    long long _avatarType;
}

@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *compositedImage;
@property (copy, nonatomic) NSString *variantName;
@property (nonatomic) long long avatarType;
@property (nonatomic) _Bool wasSelectedInFullPhotoPicker;

@end
