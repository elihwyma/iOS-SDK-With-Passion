/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString;

@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <Swift>

{
    long long _safeAreaReference;
    long long _scrollDirection;
    double _interSectionSpacing;
    NSArray *_boundarySupplementaryItems;
}

@property (nonatomic, getter=_safeAreaReference, setter=_setSafeAreaReference:) long long safeAreaReference;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)differencesFromConfiguration:(id)arg1;
- (id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 safeAreaReference:(long long)arg4;

@end
