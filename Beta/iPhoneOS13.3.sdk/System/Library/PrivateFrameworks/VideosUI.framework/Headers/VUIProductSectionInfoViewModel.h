/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, UIView, VUIProductMetadataLayout;

__attribute__((visibility("hidden")))
@interface VUIProductSectionInfoViewModel : NSObject

{
    UIView *_headerView;
    NSArray *_dataViews;
    VUIProductMetadataLayout *_layout;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *dataViews;
@property (retain, nonatomic) VUIProductMetadataLayout *layout;

+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithImage:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)dataLabelViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)dataDescriptionViewWithString:(id)arg1 maxLine:(unsigned long long)arg2 layout:(id)arg3 existingView:(id)arg4;

@end
