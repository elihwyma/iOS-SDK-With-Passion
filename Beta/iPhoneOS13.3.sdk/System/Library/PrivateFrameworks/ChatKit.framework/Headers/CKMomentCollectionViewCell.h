/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CKFullScreenEffect, NSMutableArray;

@interface CKMomentCollectionViewCell : UICollectionViewCell

{
    CKFullScreenEffect *_effect;
    NSMutableArray *_effectViews;
}

@property (retain, nonatomic) CKFullScreenEffect *effect;
@property (retain, nonatomic) NSMutableArray *effectViews;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)animate;
- (void)stopAnimation;
- (void)addEffectView:(id)arg1;
- (void)setupEffectIfNeeded;

@end
