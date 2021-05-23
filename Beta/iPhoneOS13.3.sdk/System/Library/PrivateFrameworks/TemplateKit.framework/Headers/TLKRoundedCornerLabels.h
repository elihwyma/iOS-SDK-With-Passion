/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKRoundedCornerLabels : TLKStackView

{
    NSMutableArray *_roundedLabels;
    unsigned long long _prominence;
}

@property (retain, nonatomic) NSMutableArray *roundedLabels;
@property (nonatomic) unsigned long long prominence;

- (id)init;
- (void)updateRoundedText:(id)arg1;

@end
