/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@interface TUCallModel : NSObject <Swift>

{
    _Bool _supportsHolding;
    _Bool _supportsGrouping;
    _Bool _supportsUngrouping;
    _Bool _supportsDTMF;
    _Bool _supportsUnambiguousMultiPartyState;
    _Bool _supportsAddCall;
    _Bool _supportsSendingToVoicemail;
}

@property (nonatomic) _Bool supportsHolding;
@property (nonatomic) _Bool supportsGrouping;
@property (nonatomic) _Bool supportsUngrouping;
@property (nonatomic) _Bool supportsDTMF;
@property (nonatomic) _Bool supportsUnambiguousMultiPartyState;
@property (nonatomic) _Bool supportsAddCall;
@property (nonatomic) _Bool supportsSendingToVoicemail;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
