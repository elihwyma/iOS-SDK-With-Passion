/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerAccountPhotoProvider : NSObject <CNPhotoPickerProvider> {
    CNContact * _contact;
    CNContactViewCache * _contactViewCache;
    bool  _includeUnifiedContactImages;
    NSString * identifier;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool includeUnifiedContactImages;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contact;
- (id)contactViewCache;
- (id)identifier;
- (bool)includeUnifiedContactImages;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 contactViewCache:(id)arg2 includeUnifiedContactImages:(bool)arg3;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (void)setIdentifier:(id)arg1;
- (void)setIncludeUnifiedContactImages:(bool)arg1;

@end