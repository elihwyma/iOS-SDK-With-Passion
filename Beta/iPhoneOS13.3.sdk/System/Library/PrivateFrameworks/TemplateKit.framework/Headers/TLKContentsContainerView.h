/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKContentsContainerView : TLKStackView

{
    NSMutableArray *_contentsViews;
}

@property (retain, nonatomic) NSMutableArray *contentsViews;

- (id)init;
- (void)updateWithContents:(id)arg1;

@end
