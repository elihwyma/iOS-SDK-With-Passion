/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString, PBCodable;

@interface WFUserEvent : NSObject

{
    unsigned int _metricIdentifier;
    PBCodable *_metric;
}

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)eventWithType:(long long)arg1 state:(_Bool)arg2;
+ (id)eventWithType:(long long)arg1;
+ (id)eventWithType:(long long)arg1 stateEnum:(unsigned int)arg2;

- (unsigned int)_metricIdForType:(long long)arg1;
- (id)initWithType:(long long)arg1 state:(_Bool)arg2 stateEnum:(unsigned int)arg3;

@end
