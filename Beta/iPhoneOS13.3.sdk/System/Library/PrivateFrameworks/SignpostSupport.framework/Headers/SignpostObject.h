/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <SignpostSupport/SignpostSupportObject.h>

@class NSDictionary, NSNumber, NSString;

@interface SignpostObject : SignpostSupportObject

{
    _Bool _telemetryEnabled;
    NSString *_name;
    unsigned long long _signpostId;
    unsigned long long _scope;
    NSDictionary *_attributes;
    NSString *_string1Name;
    NSString *_string1Value;
    NSString *_string2Name;
    NSString *_string2Value;
    NSString *_number1Name;
    NSNumber *_number1Value;
    NSString *_number2Name;
    NSNumber *_number2Value;
}

@property (nonatomic) unsigned long long signpostId;
@property (nonatomic) unsigned long long scope;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *scopeString;
@property (nonatomic) _Bool telemetryEnabled;
@property (retain, nonatomic) NSString *string1Name;
@property (retain, nonatomic) NSString *string1Value;
@property (retain, nonatomic) NSString *string2Name;
@property (retain, nonatomic) NSString *string2Value;
@property (retain, nonatomic) NSString *number1Name;
@property (retain, nonatomic) NSNumber *number1Value;
@property (retain, nonatomic) NSString *number2Name;
@property (retain, nonatomic) NSNumber *number2Value;

+ (id)serializationTypeNumber;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 signpostId:(unsigned long long)arg4 scope:(unsigned long long)arg5 timebaseRatio:(double)arg6 attributes:(id)arg7;

@end
