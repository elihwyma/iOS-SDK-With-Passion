/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView;

@interface _TVInfoListInfo : NSObject

{
    NSString *_group;
    double _width;
    double _lineSpacing;
    UIView *_headerContentView;
    NSArray *_dataViews;
    struct UIEdgeInsets _headerMargin;
    struct UIEdgeInsets _headerPadding;
}

@property (copy, nonatomic) NSString *group;
@property (nonatomic) double width;
@property (nonatomic) double lineSpacing;
@property (nonatomic) struct UIEdgeInsets headerMargin;
@property (nonatomic) struct UIEdgeInsets headerPadding;
@property (retain, nonatomic) UIView *headerContentView;
@property (copy, nonatomic) NSArray *dataViews;

@end
