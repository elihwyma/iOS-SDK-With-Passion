/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCAggregateLogKey.h>

@interface MCAggregateLogCloudConfigurationKey : MCAggregateLogKey

{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

+ (id)_type:(unsigned long long)arg1;
+ (id)supervised;
+ (id)DEPEnrolled;
+ (id)MDMEnrolled;

- (id)name;
- (unsigned long long)value;

@end
