/*
 Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol NSObject><NSCopying;

@interface DIAttribute : NSObject

{
    id <NSObject><NSCopying> _currentValue;
    _Bool _optional;
    _Bool _incorrect;
    _Bool _isSensitive;
    _Bool _holdLocally;
    _Bool _notForVerification;
    _Bool _dataNodeProof;
    _Bool _hasLabel;
    id <NSObject><NSCopying> _defaultValue;
    NSString *_identifier;
    unsigned long long _attributeType;
    NSString *_displayFormat;
    NSString *_localizedDisplayName;
    NSString *_localizedPlaceholder;
    NSString *_submissionKey;
    NSString *_reason;
    NSString *_submissionFormat;
    NSString *_group;
    NSString *_dataNodeProofGroup;
    NSData *_submissionValue;
    NSString *_clientValidationRegex;
    NSString *_codeOnError;
    NSString *_serverValidationURL;
    NSString *_supportingData;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long attributeType;
@property (copy, nonatomic) NSString *displayFormat;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionFormat;
@property (nonatomic) _Bool optional;
@property (nonatomic) _Bool incorrect;
@property (nonatomic) _Bool isSensitive;
@property (nonatomic) _Bool holdLocally;
@property (nonatomic) _Bool notForVerification;
@property (nonatomic) _Bool dataNodeProof;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *dataNodeProofGroup;
@property (copy, nonatomic) NSData *submissionValue;
@property (copy, nonatomic) NSString *clientValidationRegex;
@property (copy, nonatomic) NSString *codeOnError;
@property (copy, nonatomic) NSString *serverValidationURL;
@property (nonatomic) _Bool hasLabel;
@property (copy, nonatomic) NSString *supportingData;
@property (copy, nonatomic) id <NSObject><NSCopying> defaultValue;
@property (nonatomic, readonly) NSString *reason;
@property (copy, nonatomic, getter=getCurrentValue) id <NSObject><NSCopying> currentValue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)submissionString;
- (_Bool)isAttributeTypeText;
- (_Bool)isAttributeTypeDate;
- (_Bool)isAttributeTypePicker;
- (_Bool)isAttributeTypeDocument;
- (_Bool)isAttributeTypeSMSOTP;
- (_Bool)isAttributeTypeCamera;
- (_Bool)isAttributeTypeLabel;
- (_Bool)isAttributeTypeFooter;

@end
