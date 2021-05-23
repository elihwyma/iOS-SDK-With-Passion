/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UIImage;

@interface UIIndexBarEntry : NSObject

{
    NSString *_title;
    NSString *_shortTitle;
    long long _type;
    UIImage *_image;
    NSIndexPath *_indexPath;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) NSString *effectiveShortTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSString *shortTitle;

+ (id)entryWithTitle:(id)arg1;
+ (id)entryWithType:(long long)arg1;
+ (id)_dotImageInView:(id)arg1;
+ (id)_externalDotImageInView:(id)arg1;
+ (id)entryForNumbers;
+ (id)entryForSearch;
+ (id)entryForDotInView:(id)arg1;

- (id)description;

@end
