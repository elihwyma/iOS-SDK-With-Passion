/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardPropertyGroup.h>

__attribute__((visibility("hidden")))
@interface CNCardPropertyGeminiGroup : CNCardPropertyGroup

{
    _Bool _shouldShowGemini;
}

@property (nonatomic) _Bool shouldShowGemini;

- (id)displayItems;
- (id)editingItems;
- (id)_loadPropertyItems;
- (void)setGeminiResult:(id)arg1;

@end
