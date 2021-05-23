/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SSBagProfileConfig : NSObject

{
    double _bagLoadTimeout;
    NSString *_profile;
    NSString *_profileVersion;
    NSDictionary *_bagKeysDictionary;
}

@property (retain, nonatomic) NSDictionary *bagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;
@property (nonatomic, readonly) NSArray *bagKeys;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bagKeyForStringRepresentation:(id)arg1;

@end
