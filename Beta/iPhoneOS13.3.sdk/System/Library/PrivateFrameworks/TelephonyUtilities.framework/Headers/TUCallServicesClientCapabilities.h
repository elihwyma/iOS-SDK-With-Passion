/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <Swift>

{
    _Bool _wantsCallDisconnectionOnInvalidation;
    _Bool _wantsFrequencyChangeNotifications;
    id <TUCallServicesClientCapabilitiesActions> _delegate;
}

@property (weak, nonatomic) id <TUCallServicesClientCapabilitiesActions> delegate;
@property (nonatomic) _Bool wantsCallDisconnectionOnInvalidation;
@property (nonatomic) _Bool wantsFrequencyChangeNotifications;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;

@end
