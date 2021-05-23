/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class AVTStickerGenerator;

@protocol AVTAvatarRecord;

__attribute__((visibility("hidden")))
@interface CNAvatarStickerGeneratorProvider : NSObject

{
    AVTStickerGenerator *_generator;
    id <AVTAvatarRecord> _avatarRecord;
}

@property (retain, nonatomic) AVTStickerGenerator *generator;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;

- (id)initWithAvatarRecord:(id)arg1;

@end
