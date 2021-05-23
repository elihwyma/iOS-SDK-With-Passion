/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _DASActivityGroup : NSObject

{
    NSString *_name;
    unsigned long long _maxConcurrent;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long maxConcurrent;

+ (_Bool)supportsSecureCoding;
+ (id)groupWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2;

@end
