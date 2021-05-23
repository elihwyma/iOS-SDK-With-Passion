/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface MCItemDetail : NSObject

{
    _Bool _showCheckmarkView;
    _Bool _showCheckmark;
    NSString *_detailTitle;
    NSString *_detail;
    UIColor *_detailHighlightColor;
    NSString *_checkmarkText;
    UIColor *_checkmarkHighlightColor;
}

@property (retain, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) UIColor *detailHighlightColor;
@property (nonatomic) _Bool showCheckmarkView;
@property (retain, nonatomic) NSString *checkmarkText;
@property (retain, nonatomic) UIColor *checkmarkHighlightColor;
@property (nonatomic) _Bool showCheckmark;

+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(_Bool)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(_Bool)arg7;

- (id)initWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(_Bool)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(_Bool)arg7;

@end
