/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WLKEvent : NSObject

{
    NSString *_canonicalID;
    NSString *_legID;
    NSString *_externalPlayableID;
    NSString *_channelID;
    NSString *_serviceID;
    NSString *_externalServiceID;
    unsigned long long _airingType;
    NSString *_airingTypeString;
    NSDate *_canonicalStartDate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSNumber *_cleanupTime;
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) NSString *legID;
@property (nonatomic, readonly) NSString *externalPlayableID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSString *serviceID;
@property (nonatomic, readonly) NSString *externalServiceID;
@property (nonatomic, readonly) unsigned long long airingType;
@property (nonatomic, readonly) NSString *airingTypeString;
@property (nonatomic, readonly) NSDate *canonicalStartDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *cleanupTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
