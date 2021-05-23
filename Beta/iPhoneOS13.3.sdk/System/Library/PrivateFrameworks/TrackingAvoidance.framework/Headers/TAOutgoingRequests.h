/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface TAOutgoingRequests : NSObject

{
    NSString *_key;
    NSDictionary *_additionalInformation;
    NSDate *_date;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSDictionary *additionalInformation;
@property (copy, nonatomic, readonly) NSDate *date;

- (id)description;
- (id)descriptionDictionary;
- (id)initWithRequestKey:(id)arg1 additionalInformation:(id)arg2 date:(id)arg3;

@end
