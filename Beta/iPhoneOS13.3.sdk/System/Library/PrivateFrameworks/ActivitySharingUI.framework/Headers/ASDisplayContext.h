/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIFont;

@interface ASDisplayContext : NSObject

{
    double _nameFontSize;
    double _dataFontSize;
    double _multilineDataFontSize;
    UIFont *_nameFont;
    UIFont *_dataFont;
    UIFont *_multilineDataFont;
    UIFont *_unitFont;
    UIFont *_multilineUnitFont;
    NSString *_contentSizeCategory;
    UIFont *_descriptionFont;
    NSDictionary *_titleColors;
    NSDictionary *_keyColors;
}

@property (retain, nonatomic) UIFont *nameFont;
@property (retain, nonatomic) UIFont *dataFont;
@property (retain, nonatomic) UIFont *multilineDataFont;
@property (retain, nonatomic) UIFont *unitFont;
@property (retain, nonatomic) UIFont *multilineUnitFont;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (retain, nonatomic) NSDictionary *titleColors;
@property (retain, nonatomic) NSDictionary *keyColors;

+ (void)_contentSizeChangeForContext:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)_companionContext;
+ (id)_gizmoContext;
+ (id)displayContextWithName:(id)arg1;

- (id)keyColorForDisplayMode:(long long)arg1;
- (id)titleColorForDisplayMode:(long long)arg1;

@end
