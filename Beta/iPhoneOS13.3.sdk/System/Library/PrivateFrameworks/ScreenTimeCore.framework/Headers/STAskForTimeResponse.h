/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSUUID;

@interface STAskForTimeResponse : NSObject

{
    NSUUID *_associatedRequestIdentifier;
    long long _answer;
    NSNumber *_respondingUserDSID;
    NSNumber *_amountGranted;
    NSDate *_timeStamp;
}

@property (retain, nonatomic) NSUUID *associatedRequestIdentifier;
@property (nonatomic) long long answer;
@property (retain, nonatomic) NSNumber *respondingUserDSID;
@property (retain, nonatomic) NSNumber *amountGranted;
@property (retain, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic, readonly) NSDictionary *payload;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end
