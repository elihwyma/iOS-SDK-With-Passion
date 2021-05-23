/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MCSignpost : NSObject

{
    NSString *_process;
    unsigned long long _type;
    NSString *_feature;
    NSDate *_timestamp;
}

@property (copy, nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *feature;
@property (copy, nonatomic, readonly) NSDate *timestamp;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProcess:(id)arg1 type:(unsigned long long)arg2 feature:(id)arg3 timestamp:(id)arg4;

@end
