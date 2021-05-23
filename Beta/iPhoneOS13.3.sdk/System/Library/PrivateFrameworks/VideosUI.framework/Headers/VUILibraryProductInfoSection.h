/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface VUILibraryProductInfoSection : NSObject

{
    NSString *_groupName;
    UIView *_headerContentView;
    NSArray *_dataViews;
    double _lineSpacing;
    long long _layoutType;
    struct UIEdgeInsets _headerPadding;
}

@property (nonatomic) double lineSpacing;
@property (nonatomic) struct UIEdgeInsets headerPadding;
@property (nonatomic, readonly) struct UIEdgeInsets headerMargin;
@property (nonatomic) long long layoutType;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) UIView *headerContentView;
@property (copy, nonatomic) NSArray *dataViews;

+ (id)headerViewWithString:(id)arg1;
+ (id)dataViewWithString:(id)arg1;

@end
