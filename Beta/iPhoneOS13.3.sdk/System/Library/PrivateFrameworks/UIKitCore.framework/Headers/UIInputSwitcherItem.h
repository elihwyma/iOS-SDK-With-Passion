/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIFont, UISwitch;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherItem : NSObject

{
    _Bool _usesDeviceLanguage;
    NSString *_identifier;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UISwitch *_switchControl;
    CDUnknownBlockType _switchIsOnBlock;
    CDUnknownBlockType _switchToggleBlock;
    long long _selectedSegmentIndex;
    NSArray *_segmentTitles;
    NSArray *_segmentImages;
    CDUnknownBlockType _persistentSelectedIndex;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (nonatomic) _Bool usesDeviceLanguage;
@property (retain, nonatomic) UISwitch *switchControl;
@property (copy, nonatomic) CDUnknownBlockType switchIsOnBlock;
@property (copy, nonatomic) CDUnknownBlockType switchToggleBlock;
@property (nonatomic, readonly) _Bool isSegmentedItem;
@property (nonatomic) long long selectedSegmentIndex;
@property (retain, nonatomic) NSArray *segmentTitles;
@property (retain, nonatomic) NSArray *segmentImages;
@property (copy, nonatomic) CDUnknownBlockType persistentSelectedIndex;

+ (id)switcherItemWithIdentifier:(id)arg1;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
