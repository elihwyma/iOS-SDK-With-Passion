/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFContact, WFEmailAddress, WFPhoneNumber;

@interface WFContactFieldEntry : NSObject

{
    long long _type;
    WFContact *_contact;
    WFPhoneNumber *_phoneNumber;
    WFEmailAddress *_emailAddress;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) WFContact *contact;
@property (nonatomic, readonly) WFPhoneNumber *phoneNumber;
@property (nonatomic, readonly) WFEmailAddress *emailAddress;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)predictedEntryTypeForHandleValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)underlyingObject;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithHandleString:(id)arg1;

@end
