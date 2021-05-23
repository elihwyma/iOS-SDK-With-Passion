/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <SilexVideo/SVMaterialButton.h>

@interface SXVideoAdSkipButton : SVMaterialButton

{
    unsigned long long _skipDuration;
}

@property (nonatomic) unsigned long long skipDuration;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)titleForDuration:(unsigned long long)arg1;

@end
