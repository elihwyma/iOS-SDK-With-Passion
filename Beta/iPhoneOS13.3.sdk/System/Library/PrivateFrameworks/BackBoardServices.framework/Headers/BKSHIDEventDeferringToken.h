/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BKSHIDEventDeferringToken : NSObject

{
    unsigned int _CAContextID;
    NSString *_stringIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)protobufSchema;
+ (id)tokenForString:(id)arg1;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_string;
- (id)_initWithIdentifier:(unsigned int)arg1;
- (id)initForProtobufDecoding;
- (id)didFinishProtobufDecodingWithError:(out id *)arg1;
- (id)_initWithString:(id)arg1;
- (_Bool)_isIdentifierOfCAContext;
- (unsigned int)_identifierOfCAContext;
- (_Bool)_isString;

@end
