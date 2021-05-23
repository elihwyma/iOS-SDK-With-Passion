/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUQuickControlCollectionGridLayoutSettings, HUQuickControlCollectionViewGridLayoutRowInfo, NSArray;

@interface HUQuickControlCollectionViewGridLayoutDetails : NSObject

{
    HUQuickControlCollectionGridLayoutSettings *_settings;
    unsigned long long _sectionIndex;
    HUQuickControlCollectionViewGridLayoutRowInfo *_sectionHeaderLayout;
    NSArray *_rowLayouts;
    struct CGRect _contentFrame;
}

@property (retain, nonatomic) HUQuickControlCollectionGridLayoutSettings *settings;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic) unsigned long long sectionIndex;
@property (retain, nonatomic) HUQuickControlCollectionViewGridLayoutRowInfo *sectionHeaderLayout;
@property (copy, nonatomic) NSArray *rowLayouts;

- (unsigned long long)numberOfColumnsInRow:(unsigned long long)arg1;
- (id)indexPathForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)indexPathForSectionHeader;

@end
