/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class NSHashTable, NSSet;

@interface SBUIInteractionForwardingView : UIView

{
    NSHashTable *_ignoreAlphaSubviewsTable;
}

@property (copy, nonatomic) NSSet *ignoreAlphaSubviews;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addIgnoreAlphaSubview:(id)arg1;
- (void)removeIgnoreAlphaSubview:(id)arg1;

@end
