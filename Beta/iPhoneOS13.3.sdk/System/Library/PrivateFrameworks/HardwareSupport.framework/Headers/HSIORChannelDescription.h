/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <NSObject.h>

@class NSNumber, NSString, Protocol;

@interface HSIORChannelDescription : NSObject

{
    NSString *_summary;
    NSString *_name;
    NSString *_groupName;
    NSString *_subGroupName;
    NSNumber *_identifier;
    NSString *_driverName;
    NSNumber *_driverIdentifier;
    Protocol *_reportingProtocol;
}

@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *subGroupName;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *driverName;
@property (retain, nonatomic) NSNumber *driverIdentifier;
@property (retain, nonatomic) Protocol *reportingProtocol;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToChannelDescription:(id)arg1;
- (id)initWithIOReportChannelRef:(struct __CFDictionary *)arg1;

@end
