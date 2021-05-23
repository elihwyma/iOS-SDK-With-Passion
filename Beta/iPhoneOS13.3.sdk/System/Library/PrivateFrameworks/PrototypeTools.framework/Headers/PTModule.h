/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSString, PTSettings;

@interface PTModule : NSObject

{
    NSHashTable *_observers;
    NSMutableArray *_allSections;
    NSMutableArray *_enabledSections;
    PTSettings *_settings;
    NSString *_title;
}

@property (retain, nonatomic) NSMutableArray *allSections;
@property (retain, nonatomic) NSMutableArray *enabledSections;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sectionWithRows:(id)arg1;
+ (id)moduleWithTitle:(id)arg1 contents:(id)arg2;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)moduleWithSettings:(id)arg1;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)initWithContents:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (void)sectionDidReload:(id)arg1;
- (void)enumerateAllRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEnabledRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_addSection:(id)arg1;
- (void)_addSubmodule:(id)arg1;
- (id)_settingsForSection:(id)arg1;
- (void)_updateEnabledSections;
- (_Bool)_shouldEnableSection:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (id)indexPathForRow:(id)arg1;

@end
