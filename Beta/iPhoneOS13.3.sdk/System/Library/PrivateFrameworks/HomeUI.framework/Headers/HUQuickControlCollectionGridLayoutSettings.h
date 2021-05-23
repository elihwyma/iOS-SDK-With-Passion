/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUQuickControlCollectionGridLayoutSettings : NSObject

{
    unsigned long long _sectionNumber;
    NSString *_sectionIdentifier;
    NSString *_sectionHeader;
    unsigned long long _numberOfItems;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
    long long _horizontalAlignment;
    unsigned long long _itemSize;
    double _rowSpacing;
    double _interitemSpacing;
    unsigned long long _preferredLayoutStyle;
    double _sectionTopPadding;
    unsigned long long _titlePosition;
}

@property (nonatomic) unsigned long long sectionNumber;
@property (retain, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) NSString *sectionHeader;
@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) double sectionTopPadding;
@property (nonatomic) unsigned long long titlePosition;

@end
