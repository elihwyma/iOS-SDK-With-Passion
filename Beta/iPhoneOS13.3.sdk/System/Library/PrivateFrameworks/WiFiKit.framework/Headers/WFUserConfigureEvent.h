/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString, PBCodable;

@interface WFUserConfigureEvent : NSObject

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

+ (id)configureEventWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3;

- (id)initWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3;
- (unsigned int)_metricIdForType:(long long)arg1;

@end
