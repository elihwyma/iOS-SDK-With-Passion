/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface CKBallotLayoutAttributesCollection : NSObject

{
    UICollectionViewLayoutAttributes *_containerAttributes;
    UICollectionViewLayoutAttributes *_voteCountAttributes;
    UICollectionViewLayoutAttributes *_ackIconAttributes;
    NSArray *_avatarAttributesCollection;
    NSArray *_nameAttributesCollection;
}

@property (retain, nonatomic) UICollectionViewLayoutAttributes *containerAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *voteCountAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *ackIconAttributes;
@property (retain, nonatomic) NSArray *avatarAttributesCollection;
@property (retain, nonatomic) NSArray *nameAttributesCollection;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setContainerAttributes:(id)arg1 forLayoutMode:(unsigned long long)arg2;
- (void)_applyAlphaToAllAttributesAlpha:(double)arg1;

@end
