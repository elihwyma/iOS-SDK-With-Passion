/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class CWFEventID, NSDate, NSDictionary, NSUUID;

@interface CWFEvent : NSObject

{
    NSUUID *_UUID;
    CWFEventID *_eventID;
    NSDate *_timestamp;
    NSDictionary *_info;
    unsigned long long _acknowledgementTimeout;
    CDUnknownBlockType _acknowledge;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFEventID *eventID;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (copy, nonatomic) CDUnknownBlockType acknowledge;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToEvent:(id)arg1;

@end
