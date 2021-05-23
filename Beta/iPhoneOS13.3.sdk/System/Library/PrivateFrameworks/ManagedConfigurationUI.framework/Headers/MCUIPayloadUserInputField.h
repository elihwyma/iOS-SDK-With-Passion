/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MCUIPayloadUserInputField : NSObject

{
    NSMutableDictionary *_fieldDictionary;
    id _response;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int flags;
@property (nonatomic, readonly) NSNumber *minimumLength;
@property (nonatomic, readonly) NSString *title;
@property (retain, nonatomic) NSString *fieldDescription;
@property (nonatomic, readonly) NSString *retypeDescription;
@property (nonatomic, readonly) NSString *mismatchDescription;
@property (retain, nonatomic) NSString *finePrint;
@property (nonatomic, readonly) NSString *defaultValue;
@property (nonatomic, readonly) NSString *placeholderValue;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) long long capitalizationType;
@property (nonatomic, readonly) _Bool isRequired;
@property (nonatomic, readonly) _Bool isPassword;
@property (nonatomic, readonly) _Bool needsRetype;
@property (nonatomic, readonly) _Bool isDevicePasscodeField;

- (id)description;
- (id)_uuid;
- (id)responseDictionary;
- (void)setUserResponse:(id)arg1;
- (id)initWithFieldDictionary:(id)arg1;

@end
