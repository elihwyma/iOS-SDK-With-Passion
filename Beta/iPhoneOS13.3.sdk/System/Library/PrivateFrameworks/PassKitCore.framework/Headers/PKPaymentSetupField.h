/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class DIAttribute, NSDictionary, NSString;

@protocol NSObject><NSCopying;

@interface PKPaymentSetupField : NSObject

{
    id <NSObject><NSCopying> _currentValue;
    id <NSObject><NSCopying> _originalCameraCaptureValue;
    _Bool _optional;
    _Bool _currentValueFromCameraCapture;
    _Bool _requiresSecureSubmission;
    DIAttribute *_attribute;
    NSString *_identifier;
    NSString *_localizedDisplayName;
    NSString *_displayFormat;
    NSString *_defaultValue;
    NSString *_submissionKey;
    NSString *_submissionDestination;
    NSString *_localizedPlaceholder;
    NSDictionary *_rawConfigurationDictionary;
}

@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *displayFormat;
@property (nonatomic, getter=isOptional) _Bool optional;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionDestination;
@property (nonatomic) _Bool requiresSecureSubmission;
@property (copy, nonatomic, readonly) NSDictionary *rawConfigurationDictionary;
@property (nonatomic, readonly, getter=isBuiltIn) _Bool builtIn;
@property (copy, nonatomic) NSString *defaultValue;
@property (retain, nonatomic) DIAttribute *attribute;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long fieldType;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic, readonly) NSString *compactLocalizedDisplayName;
@property (copy, nonatomic) id <NSObject><NSCopying> currentValue;
@property (copy, nonatomic) id <NSObject><NSCopying> originalCameraCaptureValue;
@property (nonatomic, getter=isCurrentValueFromCameraCapture) _Bool currentValueFromCameraCapture;

+ (id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2;
+ (Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1;
+ (id)paymentSetupFieldWithDIAttribute:(id)arg1;
+ (id)newRandomlyGeneratedField;
+ (id)sampleCustomPaymentSetupFields;

- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)displayString;
- (void)updateWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)updateWithAttribute:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (void)_setLocalizedDisplayName:(id)arg1;
- (_Bool)isFieldTypeLabel;
- (_Bool)isFieldTypeText;
- (_Bool)isFieldTypeDate;
- (_Bool)isFieldTypeFooter;
- (_Bool)isFieldTypePicker;
- (id)_submissionStringForValue:(id)arg1;
- (void)noteCurrentValueChanged;
- (id)textFieldObject;
- (id)dateFieldObject;
- (id)labelFieldObject;
- (id)footerFieldObject;
- (id)pickerFieldObject;
- (id)submissionString;
- (_Bool)submissionStringMeetsAllRequirements;

@end
