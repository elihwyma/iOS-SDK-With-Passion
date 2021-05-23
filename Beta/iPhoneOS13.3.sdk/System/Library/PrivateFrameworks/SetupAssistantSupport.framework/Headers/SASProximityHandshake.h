/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <Foundation/NSObject.h>

@interface SASProximityHandshake : NSObject

{
    _Bool _hasPasscodeSet;
    int _simplePasscodeType;
    int _unlockType;
    long long _platformType;
}

@property long long platformType;
@property _Bool hasPasscodeSet;
@property int simplePasscodeType;
@property int unlockType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadInformation;

@end
