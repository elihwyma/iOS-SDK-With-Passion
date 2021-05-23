/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBrush.h>

@class NSPredicate;

@interface GKConditionBrush : GKBrush

{
    NSPredicate *_predicate;
    GKBrush *_yesBrush;
    GKBrush *_noBrush;
}

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) GKBrush *yesBrush;
@property (retain, nonatomic) GKBrush *noBrush;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@end
