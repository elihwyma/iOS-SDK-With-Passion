/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionButtonBlockHandler : NSObject

{
    CDUnknownBlockType _actionBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType actionBlock;

- (void)performAction;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

@end
