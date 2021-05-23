/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSMissingMessageMetric : NSObject

{
    long long _reason;
    NSString *_guid;
    NSString *_service;
    NSDictionary *_additionalInfo;
}

@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) NSNumber *command;

- (id)initWithReason:(long long)arg1 guid:(id)arg2 service:(id)arg3 additionalInformation:(id)arg4;
- (_Bool)shouldReportMetric;
- (_Bool)_shouldReportReason;
- (_Bool)_shouldReportMetricForExternal;

@end
