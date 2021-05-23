/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, PTSettings;

@interface PTSection : NSObject

{
    NSArray *_rows;
    NSHashTable *_observers;
    NSMutableArray *_allRows;
    NSMutableArray *_enabledRows;
    NSString *_title;
    PTSettings *_settings;
    NSString *_submoduleKeyPath;
    NSArray *_appearanceConditions;
    CDUnknownBlockType _footerTextGetter;
    CDUnknownBlockType _unregisterBlock;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) NSString *submoduleKeyPath;
@property (retain, nonatomic) NSArray *appearanceConditions;
@property (copy, nonatomic) CDUnknownBlockType footerTextGetter;
@property (copy, nonatomic) CDUnknownBlockType unregisterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (void)rowDidReload:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)_reloadEnabledRows;
- (void)_updateEnabledRows;
- (_Bool)_shouldEnableRow:(id)arg1;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (void)_sendReload;
- (id)initWithRows:(id)arg1;
- (unsigned long long)indexOfRow:(id)arg1;
- (void)enumerateAllRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEnabledRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)reloadSection;

@end
