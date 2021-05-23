/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface ADMRAIDAction : NSObject

{
    long long _type;
    NSURL *_url;
    double _maximumExpandWidth;
    double _maximumExpandHeight;
    NSDictionary *_calendarEventInfo;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) double maximumExpandWidth;
@property (nonatomic) double maximumExpandHeight;
@property (nonatomic, readonly) _Bool opensNewsLink;
@property (retain, nonatomic) NSDictionary *calendarEventInfo;

+ (_Bool)supportsSecureCoding;
+ (_Bool)doesURLOpenNews:(id)arg1;
+ (id)errorDescriptionForActionType:(long long)arg1 errorType:(long long)arg2;
+ (id)descriptionForActionType:(long long)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
