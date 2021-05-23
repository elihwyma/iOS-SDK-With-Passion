/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject

{
    _Bool _dataActive;
    _Bool _isDataAttached;
    _Bool _activationForMms;
    NSNumber *_pdpContextId;
}

@property (retain, nonatomic) NSNumber *pdpContextId;
@property (nonatomic) _Bool dataActive;
@property (nonatomic) _Bool isDataAttached;
@property (nonatomic) _Bool activationForMms;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1;

@end
