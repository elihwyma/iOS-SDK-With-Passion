/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface ACUIAppDescription : NSObject

{
    NSString *_name;
    NSString *_publisher;
    NSString *_bundleID;
    NSString *_persistentID;
    UIImage *_icon;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) UIImage *icon;

@end
