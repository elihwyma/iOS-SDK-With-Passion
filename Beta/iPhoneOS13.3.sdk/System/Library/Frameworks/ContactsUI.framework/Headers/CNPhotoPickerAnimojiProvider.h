/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTAvatarStore;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAnimojiProvider : NSObject

{
    NSString *identifier;
    id <AVTAvatarStore> _avatarStore;
}

@property (nonatomic, readonly) id <AVTAvatarStore> avatarStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;

+ (id)providerItemForAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4;
+ (id)providerItemForAvatarRecord:(id)arg1;

- (id)initWithContact:(id)arg1;
- (_Bool)canCreateMemoji;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)initWithContact:(id)arg1 avatarStore:(id)arg2;

@end
