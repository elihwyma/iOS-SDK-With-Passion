/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSString;

@interface TUCloudCallingDevice : NSObject <Swift>

{
    _Bool _defaultPairedDevice;
    _Bool _supportsRestrictingSecondaryCalling;
    NSString *_name;
    NSString *_modelIdentifier;
    NSString *_uniqueID;
    NSArray *_linkedUserURIs;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSArray *linkedUserURIs;
@property (nonatomic, getter=isDefaultPairedDevice) _Bool defaultPairedDevice;
@property (nonatomic) _Bool supportsRestrictingSecondaryCalling;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
