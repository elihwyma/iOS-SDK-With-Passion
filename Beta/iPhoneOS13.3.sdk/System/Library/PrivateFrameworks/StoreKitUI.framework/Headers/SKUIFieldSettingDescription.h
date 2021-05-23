/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescription.h>

@class NSMutableDictionary, NSString, SKUISettingsGroupController;

__attribute__((visibility("hidden")))
@interface SKUIFieldSettingDescription : SKUISettingDescription

{
    SKUISettingsGroupController *_controller;
    long long _fieldType;
    NSMutableDictionary *_fieldValues;
}

@property (nonatomic, readonly) long long fieldType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) SKUISettingsGroupController *controller;

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (long long)_fieldTypeFromElement:(id)arg1;
+ (id)_inputViewElementFromElement:(id)arg1;

- (_Bool)allowsSelection;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (void)handleSelectionOnCompletion:(CDUnknownBlockType)arg1;
- (void)setFieldValue:(id)arg1 forKey:(id)arg2;
- (id)fieldValueForKey:(id)arg1;
- (void)_dispatchEventOfType:(unsigned long long)arg1 extraInfo:(id)arg2;

@end
