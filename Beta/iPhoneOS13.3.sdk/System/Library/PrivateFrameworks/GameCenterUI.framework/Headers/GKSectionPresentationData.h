/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface GKSectionPresentationData : NSObject

{
    long long _section;
    double _headerMinY;
    double _headerMaxY;
    double _itemsMinY;
    double _itemsMaxY;
    double _footerMinY;
    double _footerMaxY;
    double _minY;
    double _maxY;
    double _showMoreMaxY;
    unsigned long long _numHeaders;
    unsigned long long _numFooters;
    unsigned long long _numOverlays;
    unsigned long long _numItems;
    unsigned long long _overlayOffset;
}

@property (nonatomic) long long section;
@property (nonatomic) double headerMinY;
@property (nonatomic) double headerMaxY;
@property (nonatomic) double itemsMinY;
@property (nonatomic) double itemsMaxY;
@property (nonatomic) double footerMinY;
@property (nonatomic) double footerMaxY;
@property (nonatomic) double minY;
@property (nonatomic) double maxY;
@property (nonatomic) double showMoreMaxY;
@property (nonatomic) unsigned long long numHeaders;
@property (nonatomic) unsigned long long numFooters;
@property (nonatomic) unsigned long long numOverlays;
@property (nonatomic) unsigned long long numItems;
@property (nonatomic) unsigned long long overlayOffset;

- (id)description;
- (id)initWithSection:(long long)arg1 presentationData:(id)arg2;
- (void)updateWithLayoutAttributes:(id)arg1 supplementaryLocation:(unsigned long long)arg2;

@end
