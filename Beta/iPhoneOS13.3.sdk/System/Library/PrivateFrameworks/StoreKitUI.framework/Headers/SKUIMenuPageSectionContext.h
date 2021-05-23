/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIMenuPageSectionContext : NSObject

{
    NSMutableDictionary *_sections;
    long long _selectedIndex;
}

@property (nonatomic) long long selectedIndex;

- (id)sectionsForIndex:(long long)arg1;
- (void)setSections:(id)arg1 forIndex:(long long)arg2;

@end
