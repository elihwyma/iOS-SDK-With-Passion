/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UILabel.h>

@interface EKStrikethroughLabel : UILabel

{
    _Bool _drawsStrikethrough;
    double _firstLineHeadIndent;
    double _hyphenationFactor;
}

@property (nonatomic) _Bool drawsStrikethrough;
@property (nonatomic) double firstLineHeadIndent;
@property (nonatomic) double hyphenationFactor;

- (void)setText:(id)arg1;

@end
