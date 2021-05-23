/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption;

@interface HUSiriLanguageOptionItem : HFItem

{
    unsigned long long _optionStyle;
    HFAccessorySettingSiriLanguageAdapter *_adapter;
    HFSiriLanguageOption *_languageOption;
}

@property (nonatomic, readonly) unsigned long long optionStyle;
@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (retain, nonatomic) HFSiriLanguageOption *languageOption;

+ (id)selectionKeyForLanguageOption:(id)arg1 withOptionStyle:(unsigned long long)arg2;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1 adapter:(id)arg2 languageOption:(id)arg3;

@end
