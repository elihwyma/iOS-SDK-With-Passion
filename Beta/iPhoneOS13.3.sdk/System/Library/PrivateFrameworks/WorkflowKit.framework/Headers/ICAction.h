/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class ICApp, NSArray, NSDate, NSDictionary, NSString;

@interface ICAction : NSObject

{
    NSArray *_inputContentClasses;
    NSArray *_outputContentClasses;
    NSDictionary *_definition;
    ICApp *_app;
    NSArray *_inputMapping;
    NSArray *_outputMapping;
}

@property (nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) ICApp *app;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) NSArray *inputMapping;
@property (nonatomic, readonly) NSArray *outputMapping;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) id parameterSummaryDefinition;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *subcategory;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly, getter=isDiscontinued) _Bool discontinued;
@property (nonatomic, readonly) NSDictionary *descriptionDictionary;
@property (nonatomic, readonly) _Bool inputRequired;
@property (nonatomic, readonly) NSArray *inputContentClasses;
@property (nonatomic, readonly) NSArray *outputContentClasses;
@property (nonatomic, readonly) _Bool inputsMultipleItems;
@property (nonatomic, readonly) _Bool outputsMultipleItems;
@property (nonatomic, readonly) _Bool skipItemClassesSupportingInput;
@property (nonatomic, readonly) _Bool neverSuggested;
@property (nonatomic, readonly) _Bool createsWFAction;
@property (nonatomic, readonly) NSString *wfActionClassName;
@property (nonatomic, readonly) NSArray *requiredResourceNames;
@property (nonatomic, readonly) NSString *inputParameterSourceKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;
- (void)processInput:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
