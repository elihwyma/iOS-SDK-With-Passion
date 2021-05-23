/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _UICollectionViewCompositionalLayoutMutableConfiguration : NSObject

{
    long long _scrollDirection;
    double _interSectionSpacing;
    NSArray *_boundarySupplementaryItems;
}

@property (nonatomic) long long scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3;

@end
