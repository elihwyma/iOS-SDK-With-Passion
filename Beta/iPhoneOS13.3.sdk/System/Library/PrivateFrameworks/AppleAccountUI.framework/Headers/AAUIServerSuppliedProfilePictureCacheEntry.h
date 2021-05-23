/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, UIImage;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject

{
    NSDate *_expirationDate;
    _Bool _updating;
    UIImage *_picture;
    NSString *_serverCacheTag;
}

@property (retain, nonatomic) UIImage *picture;
@property (copy, nonatomic) NSString *serverCacheTag;
@property (nonatomic) _Bool updating;
@property (nonatomic, readonly) _Bool expired;

- (id)description;
- (void)expire;

@end
