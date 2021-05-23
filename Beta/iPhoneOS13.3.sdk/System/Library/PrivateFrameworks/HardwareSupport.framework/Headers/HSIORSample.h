/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <NSObject.h>

@class HSIORChannelDescription, NSNumber, NSString;

@protocol HSIOReporting;

@interface HSIORSample : NSObject

{
    HSIORChannelDescription *_channelDescription;
    NSNumber *_count;
}

@property (retain, nonatomic) HSIORChannelDescription *channelDescription;
@property (retain, nonatomic) NSNumber *count;
@property (nonatomic, readonly) id <HSIOReporting> channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToSample:(id)arg1;
- (id)initWithIOReportSampleRef:(struct __CFDictionary *)arg1;

@end
