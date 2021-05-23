/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface TUICandidateLayoutAttributes : UICollectionViewLayoutAttributes

{
    unsigned long long _candidateNumber;
    double _contentAlpha;
    unsigned long long _row;
}

@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) double contentAlpha;
@property (nonatomic) unsigned long long row;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
