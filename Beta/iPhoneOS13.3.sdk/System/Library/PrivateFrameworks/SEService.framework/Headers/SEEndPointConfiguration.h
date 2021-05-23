/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

#import <NSObject.h>

@interface SEEndPointConfiguration : NSObject

{
    _Bool _enabledOnWire;
    _Bool _enabledOnContactless;
    _Bool _standardFlowAllowedOnWire;
    _Bool _standardFlowAllowedOnContactless;
    _Bool _fastFlowAllowedOnWire;
    _Bool _fastFlowAllowedOnContactless;
    _Bool _exchangeAllowedOnWire;
    _Bool _exchangeAllowedInFastFlow;
    _Bool _authorizeEndPointAllowed;
    _Bool _authorizeEndPointWithAuthorizeAllowed;
    _Bool _signAllowed;
    _Bool _exportEraseConfidentialMailBox;
    _Bool _localValidationMayBeRequested;
    _Bool _localValidationOnContactlessStatic;
    _Bool _localValidationOnContactless;
    _Bool _localValidationOnWireStatic;
    _Bool _localValidationOnWire;
    _Bool _confidentialDataAllowed;
    unsigned short _lengthConfidentialMailBox;
    unsigned short _offsetConfidentialMailBox;
    unsigned short _lengthPrivateMailBox;
    unsigned short _offsetPrivateMailBox;
}

@property _Bool enabledOnWire;
@property _Bool enabledOnContactless;
@property _Bool standardFlowAllowedOnWire;
@property _Bool standardFlowAllowedOnContactless;
@property _Bool fastFlowAllowedOnWire;
@property _Bool fastFlowAllowedOnContactless;
@property _Bool exchangeAllowedOnWire;
@property _Bool exchangeAllowedInFastFlow;
@property _Bool authorizeEndPointAllowed;
@property _Bool authorizeEndPointWithAuthorizeAllowed;
@property _Bool signAllowed;
@property _Bool exportEraseConfidentialMailBox;
@property _Bool localValidationMayBeRequested;
@property _Bool localValidationOnContactlessStatic;
@property _Bool localValidationOnContactless;
@property _Bool localValidationOnWireStatic;
@property _Bool localValidationOnWire;
@property _Bool confidentialDataAllowed;
@property unsigned short lengthConfidentialMailBox;
@property unsigned short offsetConfidentialMailBox;
@property unsigned short lengthPrivateMailBox;
@property unsigned short offsetPrivateMailBox;

+ (_Bool)supportsSecureCoding;
+ (id)configurationWithOpt1:(unsigned char)arg1 opt2:(unsigned char)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned char)opt1;
- (unsigned char)opt2;

@end
