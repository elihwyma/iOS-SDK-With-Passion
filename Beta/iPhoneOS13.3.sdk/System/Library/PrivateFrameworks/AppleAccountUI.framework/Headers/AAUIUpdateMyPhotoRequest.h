/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, NSValue, UIImage;

@interface AAUIUpdateMyPhotoRequest : AARequest

{
    ACAccount *_account;
    UIImage *_photo;
    NSValue *_cropRect;
}

+ (id)_downsampleImage:(id)arg1 fromStartingQuality:(double)arg2 toEndingQuality:(double)arg3 increment:(double)arg4 maxLength:(unsigned long long)arg5;
+ (id)_fullScreen2ImageFromImage:(id)arg1 cropRect:(id)arg2 fullScreenCropRect:(id *)arg3;

- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 photo:(id)arg2 cropRect:(id)arg3;

@end
