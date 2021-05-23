/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBagKeySet, NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSourceBuilder : NSObject

{
    AMSBagKeySet *_bagKeySet;
    NSArray *_cookies;
    NSDictionary *_data;
    NSDate *_expirationDate;
    NSString *_profile;
    NSString *_profileVersion;
}

@property (retain, nonatomic) AMSBagKeySet *bagKeySet;
@property (retain, nonatomic) NSArray *cookies;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;

- (id)createFrozenDataSource;
- (id)initWithFrozenDataSource:(id)arg1;

@end
