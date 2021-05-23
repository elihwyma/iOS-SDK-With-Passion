/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/NSCollectionLayoutSection.h>

@class NSString, _UICollectionViewListLayoutSectionConfiguration;

@protocol NSCollectionLayoutEnvironment_Private;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection

{
    _UICollectionViewListLayoutSectionConfiguration *_configuration;
    id <NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
}

@property (nonatomic, readonly, getter=_layoutEnvironment) id <NSCollectionLayoutEnvironment_Private> layoutEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_callback;
- (id)initWithConfiguration:(id)arg1;
- (void)_enrichLayoutAttributes:(id)arg1;
- (id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;
- (_Bool)__shouldDrawSeparatorAtTop:(_Bool)arg1 ofSection:(long long)arg2;
- (_Bool)__insetTopAndBottomSeparator;
- (_Bool)_shouldHideSeparatorAtIndexPath:(id)arg1;
- (_Bool)_requiresFullLengthSeparatorAtIndexPath:(id)arg1;

@end
