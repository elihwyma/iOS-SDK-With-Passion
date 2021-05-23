/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2MetricOptions, NSString, NSUUID;

@interface C2MetricRequestOptions : NSObject

{
    unsigned char __allowsExpensiveAccess;
    unsigned char __allowsPowerNapScheduling;
    NSString *__sourceApplicationBundleIdentifier;
    NSString *__sourceApplicationSecondaryIdentifier;
    NSUUID *_metricUUID;
    C2MetricOptions *_metricOptions;
}

@property (nonatomic) unsigned char _allowsExpensiveAccess;
@property (nonatomic) unsigned char _allowsPowerNapScheduling;
@property (retain, nonatomic) NSString *_sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSUUID *metricUUID;
@property (retain, nonatomic) C2MetricOptions *metricOptions;

- (id)init;
- (id)initWithRequestOptions:(id)arg1;
- (id)metricRequestTransportOptions;

@end
