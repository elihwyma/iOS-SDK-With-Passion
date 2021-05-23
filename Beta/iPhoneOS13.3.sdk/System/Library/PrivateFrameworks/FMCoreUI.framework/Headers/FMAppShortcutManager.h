/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <Foundation/NSObject.h>

@interface FMAppShortcutManager : NSObject

@property (readonly) _Bool hasShortcutItems;

+ (id)sharedInstance;

- (void)setShortcutItems:(id)arg1;
- (id)createShortcutForItem:(id)arg1;
- (void)setShortcutItem:(id)arg1;
- (void)removeShortcutItemWithIentifier:(id)arg1;
- (void)clearShortcutItems;

@end
