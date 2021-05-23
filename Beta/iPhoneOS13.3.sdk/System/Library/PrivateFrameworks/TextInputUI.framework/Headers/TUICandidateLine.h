/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;

@interface TUICandidateLine : UICollectionReusableView

{
    id <TUICandidateViewStyle> _style;
}

@property (retain, nonatomic) id <TUICandidateViewStyle> style;

+ (id)reuseIdentifier;

@end
