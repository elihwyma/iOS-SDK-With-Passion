/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (PSSpecifierUpdates)

- (void)performSpecifierUpdatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)ps_addSpecifiers:(id)arg1 toGroup:(id)arg2;
- (void)ps_addSpecifier:(id)arg1 toGroup:(id)arg2;
- (void)ps_insertObject:(id)arg1 afterObject:(id)arg2;
- (void)ps_insertObjectsFromArray:(id)arg1 afterObject:(id)arg2;
- (void)ps_addGroup:(id)arg1 afterGroup:(id)arg2;
- (void)ps_addPossibleObject:(id)arg1;

@end
