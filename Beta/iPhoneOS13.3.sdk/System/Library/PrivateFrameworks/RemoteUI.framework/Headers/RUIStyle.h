/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface RUIStyle : NSObject

{
    UIColor *_backgroundColor;
    UIColor *_radioGroupSelectedColor;
    UIColor *_buttonRowTextColor;
    UIColor *_labelRowTextColor;
    UIColor *_selectPageDetailTextColor;
    UIColor *_titleLabelTextColor;
    UIColor *_headerLabelTextColor;
    UIColor *_subHeaderLabelTextColor;
    UIColor *_detailHeaderLabelTextColor;
    UIColor *_footerLabelTextColor;
    UIColor *_focusedRowTextColor;
    long long _labelRowTextAlignment;
    long long _headerLabelAlignment;
    long long _subHeaderLabelAlignment;
    long long _footerLabelAlignment;
    long long _footerLinkAlignment;
    UIColor *_tintColor;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *radioGroupSelectedColor;
@property (retain, nonatomic) UIColor *labelRowTextColor;
@property (retain, nonatomic) UIColor *buttonRowTextColor;
@property (retain, nonatomic) UIColor *selectPageDetailTextColor;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *headerLabelTextColor;
@property (retain, nonatomic) UIColor *subHeaderLabelTextColor;
@property (retain, nonatomic) UIColor *detailHeaderLabelTextColor;
@property (retain, nonatomic) UIColor *footerLabelTextColor;
@property (retain, nonatomic) UIColor *focusedRowTextColor;
@property (nonatomic) long long labelRowTextAlignment;
@property (nonatomic) long long headerLabelAlignment;
@property (nonatomic) long long subHeaderLabelAlignment;
@property (nonatomic) long long footerLabelAlignment;
@property (nonatomic) long long footerLinkAlignment;
@property (nonatomic, readonly) long long navBarActivityIndicatorStyle;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)sharedInstance;
+ (id)defaultStyle;
+ (id)frontRowStyle;
+ (id)setupAssistantStyle;
+ (id)setupAssistantModalStyle;

- (id)init;
- (void)applyToLabel:(id)arg1;
- (void)applyToObjectModel:(id)arg1;
- (void)applyToNavigationController:(id)arg1;

@end
