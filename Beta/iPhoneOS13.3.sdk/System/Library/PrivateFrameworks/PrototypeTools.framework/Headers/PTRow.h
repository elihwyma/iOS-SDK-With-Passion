/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSPredicate, NSString, PTRowAction, PTSection, PTSettings, UIImage;

@interface PTRow : NSObject

{
    NSHashTable *_observers;
    NSString *_valueKeyPath;
    NSString *_staticTitle;
    NSString *_titleKeyPath;
    UIImage *_staticImage;
    NSString *_imageKeyPath;
    NSPredicate *_condition;
    PTRowAction *_action;
    CDUnknownBlockType _valueValidatator;
    CDUnknownBlockType _valueFormatter;
    CDUnknownBlockType _valueGetter;
    CDUnknownBlockType _valueSetter;
    CDUnknownBlockType _externalCondition;
    CDUnknownBlockType _unregisterBlock;
    PTSection *_section;
    PTSettings *_settings;
}

@property (copy, nonatomic) CDUnknownBlockType valueGetter;
@property (copy, nonatomic) CDUnknownBlockType valueSetter;
@property (copy, nonatomic) CDUnknownBlockType externalCondition;
@property (copy, nonatomic) CDUnknownBlockType unregisterBlock;
@property (weak, nonatomic) PTSection *section;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) id value;
@property (copy, nonatomic) NSString *valueKeyPath;
@property (copy, nonatomic) NSString *staticTitle;
@property (copy, nonatomic) NSString *titleKeyPath;
@property (retain, nonatomic) UIImage *staticImage;
@property (copy, nonatomic) NSString *imageKeyPath;
@property (copy, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) PTRowAction *action;
@property (copy, nonatomic) CDUnknownBlockType valueValidatator;
@property (copy, nonatomic) CDUnknownBlockType valueFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)row;
+ (id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2;
+ (id)rowWithTitle:(id)arg1 valueGetter:(CDUnknownBlockType)arg2 valueSetter:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)title;
- (id)image;
- (id)_defaultAction;
- (id)valueValidator:(CDUnknownBlockType)arg1;
- (id)condition:(id)arg1;
- (id)staticTitle:(id)arg1;
- (id)valueKeyPath:(id)arg1;
- (void)_sendValueChanged;
- (void)_sendRowDidReload;
- (void)_sendTitleChanged;
- (void)_sendImageChanged;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)titleKeyPath:(id)arg1;
- (id)staticImage:(id)arg1;
- (id)imageKeyPath:(id)arg1;
- (id)conditionFormat:(id)arg1;
- (id)action:(id)arg1;
- (id)valueFormatter:(CDUnknownBlockType)arg1;
- (id)childSettingsForKeyPath:(id)arg1;
- (void)reloadRow;

@end
