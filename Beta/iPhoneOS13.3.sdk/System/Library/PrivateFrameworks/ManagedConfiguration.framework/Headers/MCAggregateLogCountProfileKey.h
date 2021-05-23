/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCAggregateLogKey.h>

@interface MCAggregateLogCountProfileKey : MCAggregateLogKey

{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

+ (id)_type:(unsigned long long)arg1;
+ (id)all;
+ (id)carrier;
+ (id)signed;
+ (id)signedByApple;
+ (id)encrypted;
+ (void)updateProfileCounts;

- (id)name;
- (unsigned long long)value;

@end
