/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKEntity, CNAvatarView, UICollectionViewLayoutAttributes, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface _CKAcknowledgementSectionAnimator : NSObject

{
    UICollectionViewLayoutAttributes *_avatarViewAttr;
    CNAvatarView *_avatarView;
    UILabel *_voteCountLabel;
    UICollectionViewLayoutAttributes *_voteCountViewAttr;
    UIImageView *_ackIconView;
    UICollectionViewLayoutAttributes *_ackIconViewAttr;
    UIView *_containerView;
    unsigned long long _ackVoteCount;
    CKEntity *_entityToShow;
    long long _acknowledgmentType;
}

@property (retain, nonatomic) UICollectionViewLayoutAttributes *avatarViewAttr;
@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UILabel *voteCountLabel;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *voteCountViewAttr;
@property (retain, nonatomic) UIImageView *ackIconView;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *ackIconViewAttr;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long ackVoteCount;
@property (retain, nonatomic) CKEntity *entityToShow;
@property (nonatomic) long long acknowledgmentType;

- (void)dealloc;
- (void)_updateAckIconViewDelayTime:(double)arg1;
- (void)_updateAvatarViewDelayTime:(double)arg1;
- (void)_updateVoteCountViewDelayTime:(double)arg1;
- (void)animateInAckIconView:(double)arg1;
- (void)insertAvatarDelayTime:(double)arg1;

@end
