/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections;
@property (retain) SUScriptSection *selectedSection;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_tabBarConfigurationChangedNotification:(id)arg1;
- (id)_copySectionWithIdentifier:(id)arg1;
- (id)_fixedSelectedIdentifier;
- (void)_setSelectedIdentifier:(id)arg1;
- (id)sectionWithIdentifier:(id)arg1;
- (void)setRootViewController:(id)arg1 forSection:(id)arg2;

@end
