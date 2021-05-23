/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIView;

@interface UITableViewSection : NSObject <Swift>

{
    NSString *_headerTitle;
    UIView *_headerView;
    NSString *_footerTitle;
    UIView *_footerView;
    NSArray *_rows;
}

@property (copy, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) UIView *headerView;
@property (copy, nonatomic) NSString *footerTitle;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) NSArray *rows;

+ (id)sectionWithRows:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
