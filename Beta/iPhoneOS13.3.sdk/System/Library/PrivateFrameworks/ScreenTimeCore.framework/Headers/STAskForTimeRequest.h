/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSUUID;

@interface STAskForTimeRequest : NSObject

{
    _Bool _oneMoreMinute;
    long long _usageType;
    NSString *_requestedResourceIdentifier;
    NSString *_resourceDisplayName;
    NSNumber *_timeRequested;
    NSDate *_timeStamp;
    NSUUID *_requestIdentifier;
    NSNumber *_requestingUserDSID;
    NSString *_requestingUserDisplayName;
}

@property (nonatomic) _Bool oneMoreMinute;
@property (copy, nonatomic) NSString *resourceDisplayName;
@property (retain, nonatomic) NSNumber *timeRequested;
@property (retain, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) long long usageType;
@property (copy, nonatomic, readonly) NSString *requestedResourceIdentifier;
@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) NSNumber *requestingUserDSID;
@property (copy, nonatomic) NSString *requestingUserDisplayName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithUsageType:(long long)arg1 requestedResourceIdentifier:(id)arg2;

@end
