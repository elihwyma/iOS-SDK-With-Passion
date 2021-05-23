/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UITraitCollection;

@protocol NSCollectionLayoutContainer, _UIDataSourceSnapshot;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutEnvironment : NSObject

{
    id <_UIDataSourceSnapshot> __dataSourceSnapshot;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
}

@property (retain, nonatomic) id <NSCollectionLayoutContainer> container;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) id <_UIDataSourceSnapshot> _dataSourceSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3;

@end
