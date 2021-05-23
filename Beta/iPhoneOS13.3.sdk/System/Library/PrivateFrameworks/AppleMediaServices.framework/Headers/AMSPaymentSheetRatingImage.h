/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetRatingImage : NSObject

{
    long long _ratingType;
    NSString *_URLString;
    NSString *_value;
}

@property (copy, nonatomic, readonly) NSString *localAssetName;
@property (nonatomic, readonly) long long ratingType;
@property (nonatomic, readonly, getter=isServerSupplied) _Bool serverSupplied;
@property (copy, nonatomic, readonly) NSString *URLString;
@property (copy, nonatomic, readonly) NSString *value;

- (id)initWithDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (long long)_ratingTypeForType:(id)arg1;

@end
