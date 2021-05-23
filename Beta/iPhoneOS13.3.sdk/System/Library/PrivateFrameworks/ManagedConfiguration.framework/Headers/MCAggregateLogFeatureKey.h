/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogFeatureKey : MCAggregateLogKey

{
    unsigned long long _type;
    NSString *_feature;
    NSString *_nameSuffix;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *feature;
@property (retain, nonatomic) NSString *nameSuffix;

+ (void)update;
+ (id)trueFeature:(id)arg1 name:(id)arg2;
+ (id)falseFeature:(id)arg1 name:(id)arg2;
+ (id)valueFeature:(id)arg1 name:(id)arg2;
+ (id)objectFeature:(id)arg1 name:(id)arg2;
+ (id)intersectionFeature:(id)arg1 name:(id)arg2;
+ (id)_feature:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3;
+ (id)trueFeature:(id)arg1;
+ (id)falseFeature:(id)arg1;
+ (id)valueFeature:(id)arg1;
+ (id)objectFeature:(id)arg1;
+ (id)intersectionFeature:(id)arg1;

@end
