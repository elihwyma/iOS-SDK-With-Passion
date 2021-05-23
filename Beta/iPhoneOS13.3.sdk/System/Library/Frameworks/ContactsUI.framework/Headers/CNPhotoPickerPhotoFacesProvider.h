/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerPhotoFacesProvider : NSObject

{
    NSString *identifier;
    CNContact *_contact;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;

- (id)initWithContact:(id)arg1;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)getItemsFromPhotoLibraryWithItemDelegate:(id)arg1;
- (struct CGRect)cropRectForAsset:(id)arg1 face:(id)arg2;

@end
