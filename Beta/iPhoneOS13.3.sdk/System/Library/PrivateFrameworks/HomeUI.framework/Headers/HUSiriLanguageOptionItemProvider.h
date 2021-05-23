/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HFAccessorySettingSiriLanguageAdapter, NSSet;

@interface HUSiriLanguageOptionItemProvider : HFItemProvider

{
    NSSet *_items;
    unsigned long long _optionStyle;
    HFAccessorySettingSiriLanguageAdapter *_adapter;
}

@property (retain, nonatomic) NSSet *items;
@property (nonatomic, readonly) unsigned long long optionStyle;
@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;

- (id)reloadItems;
- (id)initWithAdapter:(id)arg1 optionStyle:(unsigned long long)arg2;

@end
