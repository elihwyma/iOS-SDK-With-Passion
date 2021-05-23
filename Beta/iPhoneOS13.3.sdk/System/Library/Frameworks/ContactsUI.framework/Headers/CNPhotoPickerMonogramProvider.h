/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerMonogramProvider : NSObject

{
    NSString *_identifier;
    CNContact *_contact;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;

+ (id)generateMonogramItemForContact:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 RTL:(_Bool)arg4;
+ (id)providerItemForContact:(id)arg1 size:(struct CGSize)arg2 RTL:(_Bool)arg3;
+ (id)providerItemForContact:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 RTL:(_Bool)arg4;

- (id)initWithContact:(id)arg1;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;

@end
