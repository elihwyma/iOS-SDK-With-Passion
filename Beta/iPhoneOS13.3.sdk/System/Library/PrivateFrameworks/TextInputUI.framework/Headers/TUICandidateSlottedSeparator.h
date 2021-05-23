/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <TextInputUI/TUICandidateLine.h>

@class UIImageView;

@interface TUICandidateSlottedSeparator : TUICandidateLine

{
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;

+ (id)reuseIdentifier;

- (void)setStyle:(id)arg1;

@end
