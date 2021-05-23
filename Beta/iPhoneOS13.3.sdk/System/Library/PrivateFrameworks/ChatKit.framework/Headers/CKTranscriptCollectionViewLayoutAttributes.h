/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class CKChatItem, NSMutableArray;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

{
    struct CGRect _targetFrame;
    struct CGRect _currentFrame;
    double _easing;
    double _targetEasing;
    BOOL _orientation;
    struct CATransform3D _contentTransform3D;
    double _targetCenterY;
    double _currentCenterY;
    double _height;
    double _factor;
    _Bool _hidden;
    double _associatedVerticalShift;
    NSMutableArray *_associatedLayoutAttributes;
    CKTranscriptCollectionViewLayoutAttributes *_initialParentLayoutAttributes;
    CKChatItem *_chatItem;
    struct CGSize _parentChatItemSize;
}

@property (retain, nonatomic) CKChatItem *chatItem;
@property (nonatomic) struct CGSize parentChatItemSize;
@property (nonatomic, readonly) struct CATransform3D contentTransform3D;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setAlphaOrFilterLevel:(double)arg1;

@end
