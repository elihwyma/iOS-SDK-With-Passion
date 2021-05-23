/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAvatarItem : NSObject

{
    _Bool _wasSetFromFullPhotoPicker;
    CDUnknownBlockType _imageProvider;
    CDUnknownBlockType _originalImageProvider;
    long long _type;
    NSString *_variantIdentifier;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType imageProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType originalImageProvider;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic) NSString *variantIdentifier;
@property (nonatomic) _Bool wasSetFromFullPhotoPicker;

- (id)initWithImageProvider:(CDUnknownBlockType)arg1 type:(long long)arg2;
- (id)initWithImageProvider:(CDUnknownBlockType)arg1 originalImageProvider:(CDUnknownBlockType)arg2 type:(long long)arg3;

@end
