/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerConfiguration : NSObject

{
    _Bool _includeContactImage;
    _Bool _includeUnifiedContactImages;
    _Bool _includeFaces;
    _Bool _includeMonograms;
    _Bool _includeAnimoji;
    _Bool _includeRecents;
    _Bool _allowPhotoCapture;
    _Bool _allowAnimojiCreation;
    _Bool _allowRotation;
}

@property (nonatomic, readonly) _Bool includeContactImage;
@property (nonatomic, readonly) _Bool includeUnifiedContactImages;
@property (nonatomic, readonly) _Bool includeFaces;
@property (nonatomic, readonly) _Bool includeMonograms;
@property (nonatomic, readonly) _Bool includeAnimoji;
@property (nonatomic, readonly) _Bool includeRecents;
@property (nonatomic, readonly) _Bool allowPhotoCapture;
@property (nonatomic, readonly) _Bool allowAnimojiCreation;
@property (nonatomic, readonly) _Bool allowRotation;

+ (id)defaultConfiguration;
+ (id)contactsConfiguration;
+ (id)gameCenterConfiguration;

- (id)configurationBySettingAllowsPhotoCapture:(_Bool)arg1;
- (id)initWithIncludeContactImage:(_Bool)arg1 includeUnifiedContactImages:(_Bool)arg2 includeFaces:(_Bool)arg3 includeMonograms:(_Bool)arg4 includeAnimoji:(_Bool)arg5 includeRecents:(_Bool)arg6 allowPhotoCapture:(_Bool)arg7 allowAnimojiCreation:(_Bool)arg8 allowRotation:(_Bool)arg9;

@end
