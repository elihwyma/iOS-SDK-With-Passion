/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface PSUIAppDescription : NSObject

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

- (id)description;

@end
