/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSError, NSNumber, NSString;

@interface TBFetchAnalyticsEvent : NSObject

{
    unsigned long long _source;
    unsigned long long _type;
    unsigned long long _trigger;
    NSNumber *_duration;
    NSNumber *_requestCount;
    NSNumber *_resultCount;
    NSString *_tileKey;
    NSError *_error;
    NSDate *_date;
}

@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long trigger;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *requestCount;
@property (retain, nonatomic) NSNumber *resultCount;
@property (retain, nonatomic) NSString *tileKey;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSDictionary *eventDictionary;

+ (id)fetchEventWithSource:(unsigned long long)arg1 type:(unsigned long long)arg2 trigger:(unsigned long long)arg3 duration:(id)arg4 requestCount:(id)arg5 resultCount:(id)arg6 error:(id)arg7 tileKey:(id)arg8;

@end
