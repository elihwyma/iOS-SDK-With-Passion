/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface STSegmentItem : NSObject

{
    NSString *_titleText;
    NSString *_detailText;
    UIColor *_titleColor;
    UIImage *_detailImage;
    UIColor *_detailImageTintColor;
}

@property (copy, nonatomic, readonly) NSString *titleText;
@property (copy, nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly) UIImage *detailImage;
@property (copy, readonly) UIColor *detailImageTintColor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitleText:(id)arg1 detailText:(id)arg2 titleColor:(id)arg3 detailImage:(id)arg4 detailImageTintColor:(id)arg5;

@end
