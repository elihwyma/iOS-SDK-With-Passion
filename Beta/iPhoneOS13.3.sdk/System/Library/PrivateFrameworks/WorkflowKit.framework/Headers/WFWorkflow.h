/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray, NSString, WFActionGroupingCache, WFVariableAvailability, WFWorkflowIcon, WFWorkflowQuarantine, WFWorkflowRecord, WFWorkflowReference;

@protocol WFRecordStorageProvider;

@interface WFWorkflow : NSObject <Swift>

{
    _Bool _saveDisabled;
    NSArray *_actions;
    WFVariableAvailability *_variableAvailability;
    WFActionGroupingCache *_groupingCache;
    NSArray *_inputClasses;
    NSArray *_importQuestions;
    WFWorkflowRecord *_record;
    long long _environment;
    WFWorkflowQuarantine *_quarantine;
    WFWorkflowReference *_overridenReference;
    id <WFRecordStorageProvider> _storageProvider;
}

@property (copy, nonatomic, readonly) NSArray *actions;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (nonatomic, readonly, getter=isResidentCompatible) _Bool residentCompatible;
@property (nonatomic, readonly) WFActionGroupingCache *groupingCache;
@property (nonatomic, readonly) WFWorkflowReference *overridenReference;
@property (nonatomic) _Bool saveDisabled;
@property (nonatomic, readonly) id <WFRecordStorageProvider> storageProvider;
@property (copy, nonatomic) NSArray *inputClasses;
@property (nonatomic, readonly) NSArray *actions;
@property (copy, nonatomic) NSArray *importQuestions;
@property (nonatomic, readonly) WFWorkflowReference *reference;
@property (nonatomic, readonly) WFWorkflowRecord *record;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) NSString *workflowID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *legacyName;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (nonatomic, readonly) NSString *workflowSubtitle;
@property (nonatomic, readonly) NSString *actionsDescription;
@property (nonatomic, readonly) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly) NSString *galleryIdentifier;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic) _Bool hiddenInComplication;
@property (nonatomic) _Bool hiddenFromLibraryAndSync;
@property (retain, nonatomic) WFWorkflowQuarantine *quarantine;
@property (nonatomic) long long remoteQuarantineStatus;
@property (nonatomic, readonly) WFVariableAvailability *variableAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)defaultName;
+ (id)localizedSubtitleWithActionCount:(unsigned long long)arg1;
+ (id)effectiveInputClassesFromInputClasses:(id)arg1 workflowTypes:(id)arg2;
+ (_Bool)checkClientVersion:(id)arg1 currentVersion:(id)arg2 error:(id *)arg3;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 error:(id *)arg3;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(_Bool)arg3 environment:(long long)arg4 error:(id *)arg5;
+ (id)supportedInputClasses;
+ (id)supportedInputClassNames;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (void)save;
- (void)addAction:(id)arg1;
- (id)localizedSubtitle;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)setActions:(id)arg1;
- (void)setEditingDelegate:(id)arg1;
- (id)editingDelegate;
- (id)eventDictionary;
- (void)generateShortcutRepresentation:(CDUnknownBlockType)arg1;
- (id)initWithActionDonation:(id)arg1 error:(id *)arg2;
- (id)initWithShortcut:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 description:(id)arg2 associatedAppBundleIdentifier:(id)arg3 actions:(id)arg4;
- (void)actionNameDidChange:(id)arg1;
- (void)actionOutputDetailsDidChange:(id)arg1;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)action:(id)arg1 supplementalParameterValueDidChangeForKey:(id)arg2;
- (void)removeAction:(id)arg1;
- (void)overrideReference:(id)arg1;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 error:(id *)arg3;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(_Bool)arg3 environment:(long long)arg4 error:(id *)arg5;
- (id)validImportQuestions;
- (id)workflowByClearingPrivateImportQuestionData;
- (_Bool)hasStorageProvider;
- (void)reloadFromRecord;
- (void)loadFromRecord;
- (void)authorizeAccessResourcesIfNeeded;
- (void)performBatchOperation:(CDUnknownBlockType)arg1;
- (void)saveActionsToRecordIfNeeded;
- (void)configureAsSingleStepShortcutIfNecessary:(CDUnknownBlockType)arg1;
- (void)configureWithShortcut:(id)arg1;
- (void)initializeAddedAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertActions:(id)arg1 atIndexes:(id)arg2;
- (void)moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (id)actionsGroupedWithAction:(id)arg1;
- (id)actionForSuggestionsDrawer;
- (void)updateVariablesForAction:(id)arg1 includingImportedVariables:(_Bool)arg2;
- (void)action:(id)arg1 didChangeVariableName:(id)arg2 to:(id)arg3;
- (id)effectiveInputClasses;
- (id)localizedActionsSummary;
- (void)loadActionDescriptionIconsMaxCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isUntitled;
- (id)createUserActivityForViewing;
- (void)requestToRunScriptsOnDomain:(id)arg1 withUserInterface:(id)arg2 database:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
