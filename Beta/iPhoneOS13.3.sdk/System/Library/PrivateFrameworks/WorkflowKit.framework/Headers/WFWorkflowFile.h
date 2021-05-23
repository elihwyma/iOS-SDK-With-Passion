/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowQuarantine;

@interface WFWorkflowFile : NSObject

{
    NSString *_name;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    WFWorkflowQuarantine *_quarantine;
    NSMutableDictionary *_rootObject;
    WFFileRepresentation *_file;
}

@property (nonatomic, readonly) NSMutableDictionary *rootObject;
@property (nonatomic, readonly) WFFileRepresentation *file;
@property (nonatomic, readonly) NSDictionary *rootObjectForExport;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) WFWorkflowQuarantine *quarantine;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (nonatomic, readonly) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)descriptor;
- (id)initWithFileData:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithDictionary:(id)arg1 name:(id)arg2;
- (id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(_Bool)arg3;
- (id)initWithDescriptor:(id)arg1 performMigration:(_Bool)arg2 error:(id *)arg3;
- (id)recordRepresentationWithError:(id *)arg1;
- (id)writeToDiskWithError:(id *)arg1;
- (id)fileDataWithError:(id *)arg1;
- (_Bool)writeToOutputStream:(id)arg1 error:(id *)arg2;
- (_Bool)migrateRootObject;
- (void)migrateTypesForImport;

@end
