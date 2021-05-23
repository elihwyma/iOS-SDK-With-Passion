/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSPaymentSheetRatingImage : NSObject

{
    struct CGImage *_image;
    long long _ratingType;
    NSString *_urlString;
    NSString *_value;
}

@property (readonly) long long ratingType;
@property (copy, readonly) NSString *urlString;
@property (copy, readonly) NSString *value;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (_Bool)isServerSupplied;
- (id)localAssetName;
- (long long)_ratingTypeForType:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
