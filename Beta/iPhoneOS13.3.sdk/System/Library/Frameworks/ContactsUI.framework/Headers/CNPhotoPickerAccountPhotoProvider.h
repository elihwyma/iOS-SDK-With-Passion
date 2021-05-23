/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactViewCache, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAccountPhotoProvider : NSObject

{
    _Bool _includeUnifiedContactImages;
    NSString *identifier;
    CNContact *_contact;
    CNContactViewCache *_contactViewCache;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (nonatomic) _Bool includeUnifiedContactImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;

- (id)initWithContact:(id)arg1;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)initWithContact:(id)arg1 contactViewCache:(id)arg2 includeUnifiedContactImages:(_Bool)arg3;

@end
