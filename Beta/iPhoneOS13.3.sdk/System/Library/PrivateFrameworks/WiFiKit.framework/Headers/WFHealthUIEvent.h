/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString, PBCodable;

@interface WFHealthUIEvent : NSObject

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

+ (id)subtitleEventWithIssues:(id)arg1 ssid:(id)arg2;
+ (id)tapLinkEventWithIssues:(id)arg1 ssid:(id)arg2;
+ (id)detailEventWithIssues:(id)arg1 ssid:(id)arg2;

- (id)initWithEventType:(long long)arg1 issues:(id)arg2 ssid:(id)arg3;

@end
