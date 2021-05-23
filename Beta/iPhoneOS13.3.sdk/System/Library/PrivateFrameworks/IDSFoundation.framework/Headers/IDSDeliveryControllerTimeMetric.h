/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IDSDeliveryControllerTimeMetric : NSObject

{
    double _timeToSend;
    long long _endpointCount;
    _Bool _usedPipeline;
    _Bool _usedMMCS;
    long long _responseCode;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned short rtcType;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) double timeToSend;
@property (nonatomic, readonly) long long endpointCount;
@property (nonatomic, readonly) _Bool usedPipeline;
@property (nonatomic, readonly) _Bool usedMMCS;
@property (nonatomic, readonly) long long responseCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(_Bool)arg4 usedMMCS:(_Bool)arg5 responseCode:(long long)arg6;

@end
