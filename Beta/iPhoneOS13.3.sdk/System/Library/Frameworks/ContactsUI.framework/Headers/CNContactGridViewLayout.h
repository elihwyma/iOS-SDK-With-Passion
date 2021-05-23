/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface CNContactGridViewLayout : UICollectionViewFlowLayout <Swift>

{
    _Bool _needsUpdateLayout;
    long long _numberOfColumns;
    NSIndexPath *_selectedIndexPath;
    double _offsetBefore;
    double _offsetAfter;
    double _selectedItemWidthOffset;
}

@property (nonatomic) _Bool needsUpdateLayout;
@property (nonatomic) double offsetBefore;
@property (nonatomic) double offsetAfter;
@property (nonatomic) double selectedItemWidthOffset;
@property (nonatomic) long long numberOfColumns;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)_updateLayoutMetrics;

@end
