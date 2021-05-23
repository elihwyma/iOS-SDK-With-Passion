/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSBagProfileConfig.h>

@class NSMutableDictionary, NSString;

@interface SSMutableBagProfileConfig : SSBagProfileConfig

{
    NSMutableDictionary *_mutableBagKeysDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *mutableBagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;

- (id)init;
- (id)bagKeysDictionary;
- (void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2;

@end
