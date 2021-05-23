/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFDataStore, AFDialogPhase, AceObject, NSString, NSUUID;

@interface AFMutableConversationItem : NSObject

{
    _Bool _virgin;
    NSUUID *_identifier;
    NSUUID *_revisionIdentifier;
    long long _type;
    AceObject *_aceObject;
    AFDialogPhase *_dialogPhase;
    NSString *_aceCommandIdentifier;
    long long _presentationState;
    AFDataStore *_associatedDataStore;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSUUID *revisionIdentifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) AceObject *aceObject;
@property (retain, nonatomic) AFDialogPhase *dialogPhase;
@property (copy, nonatomic) NSString *aceCommandIdentifier;
@property (nonatomic) long long presentationState;
@property (nonatomic, getter=isVirgin) _Bool virgin;
@property (nonatomic, readonly) AFDataStore *associatedDataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(_Bool)arg8 associatedDataStore:(id)arg9;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(long long)arg5 aceCommandIdentifier:(id)arg6 virgin:(_Bool)arg7 associatedDataStore:(id)arg8;
- (void)_didMutate;
- (id)_propertyListStringForType;
- (id)_propertyListStringForPresentationState;
- (long long)_typeForPropertyListString:(id)arg1;
- (long long)_presentationStateForPropertyListString:(id)arg1;
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(_Bool)arg6 associatedDataStore:(id)arg7;

@end
