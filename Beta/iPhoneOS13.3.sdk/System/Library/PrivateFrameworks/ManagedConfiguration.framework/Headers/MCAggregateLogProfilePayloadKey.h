/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogProfilePayloadKey : MCAggregateLogKey

{
    Class _payloadClass;
    NSString *_nameSuffix;
}

@property (weak, nonatomic) Class payloadClass;
@property (retain, nonatomic) NSString *nameSuffix;

+ (id)payloadClass:(Class)arg1 name:(id)arg2;

- (id)name;
- (unsigned long long)value;

@end
