/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CWFANQPParameters : NSObject

{
    NSArray *_scanResults;
    NSArray *_ANQPElementIDList;
    unsigned long long _maximumCacheAge;
}

@property (copy, nonatomic) NSArray *scanResults;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long maximumCacheAge;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToANQPParameters:(id)arg1;

@end
