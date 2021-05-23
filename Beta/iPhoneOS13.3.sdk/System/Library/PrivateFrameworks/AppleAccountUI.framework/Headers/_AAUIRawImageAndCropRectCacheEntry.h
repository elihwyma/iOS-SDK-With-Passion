/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, UIImage;

@interface _AAUIRawImageAndCropRectCacheEntry : NSObject

{
    UIImage *_rawImage;
    NSString *_serverCacheTag;
    NSDate *_expirationDate;
    struct CGRect _rawCropRect;
}

@property (nonatomic, readonly) UIImage *rawImage;
@property (nonatomic, readonly) struct CGRect rawCropRect;
@property (nonatomic, readonly) NSString *serverCacheTag;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (id)entryWithRawImage:(id)arg1 rawCropRect:(struct CGRect)arg2 serverCacheTag:(id)arg3;

@end
