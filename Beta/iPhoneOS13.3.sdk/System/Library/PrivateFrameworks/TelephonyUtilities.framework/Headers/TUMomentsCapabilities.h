/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSSet;

@interface TUMomentsCapabilities : NSObject <Swift>

{
    int _availability;
    NSSet *_supportedMediaTypes;
}

@property (nonatomic, readonly) int availability;
@property (copy, nonatomic, readonly) NSSet *supportedMediaTypes;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCapabilities:(id)arg1;
- (id)initWithAvailability:(int)arg1 supportedMediaTypes:(id)arg2;

@end
