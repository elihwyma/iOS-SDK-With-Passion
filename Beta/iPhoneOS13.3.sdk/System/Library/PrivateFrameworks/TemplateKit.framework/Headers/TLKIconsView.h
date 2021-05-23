/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKIconsView : TLKStackView

{
    NSMutableArray *_imageViews;
    unsigned long long _prominence;
}

@property (retain, nonatomic) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long prominence;

- (id)init;
- (void)updateIcons:(id)arg1;

@end
