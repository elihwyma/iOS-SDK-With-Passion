/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridCellStyle : NSObject <Swift>

{
    double _titleFirstBaselineHeight;
    double _subtitleFirstBaselineHeight;
    NSString *_titleTextStyle;
    NSString *_subtitleTextStyle;
    NSDictionary *_titleDefaultFontAttributes;
    NSDictionary *_subtitleDefaultFontAttributes;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    double _textFirstBaselineToBottom;
    double _textLastBaselineToBottom;
    long long _defaultTextAlignment;
    struct CGSize _imageSize;
}

@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) double titleFirstBaselineHeight;
@property (nonatomic) double subtitleFirstBaselineHeight;
@property (copy, nonatomic) NSString *titleTextStyle;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (copy, nonatomic) NSDictionary *titleDefaultFontAttributes;
@property (copy, nonatomic) NSDictionary *subtitleDefaultFontAttributes;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) UIColor *subtitleTextColor;
@property (nonatomic) double textFirstBaselineToBottom;
@property (nonatomic) double textLastBaselineToBottom;
@property (nonatomic) long long defaultTextAlignment;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
