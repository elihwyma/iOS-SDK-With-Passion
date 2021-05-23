/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSString, WFImage;

@protocol WFVariableProvider;

@interface WFVariable : NSObject <Swift>

{
    NSArray *_aggrandizements;
    NSHashTable *_delegates;
    NSDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) NSString *nameIncludingPropertyName;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (copy, nonatomic) NSDictionary *dictionary;
@property (nonatomic, readonly) NSArray *aggrandizements;
@property (nonatomic, readonly) _Bool supportsAggrandizements;
@property (nonatomic, readonly) _Bool requiresModernVariableSupport;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) WFImage *icon;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (weak, nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)serializedRepresentation;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)getContentWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
- (void)wf_getContentItemsWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)wf_lengthInVariableString;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;
- (void)variableProvider:(id)arg1 variableWasMoved:(id)arg2;
- (void)variableProviderDidInvalidateOutputDetails:(id)arg1;
- (void)variableUpdated;
- (id)possibleContentClasses;
- (id)possibleAggrandizedContentClasses;
- (id)possibleAggrandizedContentClassesWithContext:(id)arg1;
- (void)getObjectRepresentationForClass:(Class)arg1 variableSource:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)variableBySettingAggrandizements:(id)arg1;

@end
