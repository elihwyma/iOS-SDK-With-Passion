/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WAMessage : NSObject

{
    _Bool _isRootMessage;
    NSMutableDictionary *_mutableFields;
    NSString *_key;
    NSString *_originalClassName;
    NSString *_uuid;
    unsigned long long _metricID;
}

@property (nonatomic, readonly) NSMutableDictionary *mutableFields;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) _Bool isRootMessage;
@property (nonatomic, readonly) NSString *originalClassName;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long metricID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)addField:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (id)initWithKey:(id)arg1 andFields:(id)arg2 isRootMessage:(_Bool)arg3 originalClassName:(id)arg4 uuid:(id)arg5;
- (void)setMetricID:(unsigned long long)arg1;
- (void)setIsRootMessage:(_Bool)arg1;
- (void)setOriginalClassName:(id)arg1;
- (void)setMutableFields:(id)arg1;

@end
