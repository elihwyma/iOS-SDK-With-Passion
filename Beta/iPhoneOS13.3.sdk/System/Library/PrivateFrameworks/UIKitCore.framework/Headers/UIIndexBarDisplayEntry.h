/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIIndexBarEntry;

__attribute__((visibility("hidden")))
@interface UIIndexBarDisplayEntry : NSObject

{
    UIIndexBarEntry *_entry;
    long long _entryIndex;
    long long _displayEntryIndex;
}

@property (retain, nonatomic) UIIndexBarEntry *entry;
@property (nonatomic) long long entryIndex;
@property (nonatomic) long long displayEntryIndex;

- (id)description;

@end
