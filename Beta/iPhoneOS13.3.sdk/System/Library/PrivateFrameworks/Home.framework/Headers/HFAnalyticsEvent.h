/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface HFAnalyticsEvent : NSObject

{
    unsigned long long _type;
    NSDate *_timestamp;
}

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;

- (id)description;
- (id)initWithEventType:(unsigned long long)arg1;

@end
