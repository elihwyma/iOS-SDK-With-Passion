/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface _UIActivityBundleImageConfiguration : NSObject

{
    UIImage *_fetchedImage;
    NSString *_imageName;
    NSString *_bundlePath;
    long long _activityCategory;
}

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundlePath;
@property (nonatomic) long long activityCategory;
@property (nonatomic, readonly) UIImage *fetchedImage;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageName:(id)arg1 bundlePath:(id)arg2 activityCategory:(long long)arg3;

@end
