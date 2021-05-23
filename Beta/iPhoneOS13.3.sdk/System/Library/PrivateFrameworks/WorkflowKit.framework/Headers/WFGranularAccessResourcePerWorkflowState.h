/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSSet, NSString;

@interface WFGranularAccessResourcePerWorkflowState : NSObject

{
    NSSet *_entries;
    NSMapTable *_entriesMapTable;
}

@property (retain, nonatomic) NSMapTable *entriesMapTable;
@property (nonatomic, readonly) NSSet *entries;
@property (nonatomic, readonly) _Bool hasDeniedEntries;
@property (nonatomic, readonly) _Bool hasUndeterminedEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (Class)entryTypeClass;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (id)stateByPerformingUnionWithState:(id)arg1;
- (id)stateByPopulatingNotDeterminedEntriesUsingState:(id)arg1;
- (id)stateBySettingUndeterminedEntriesToAuthorized:(_Bool)arg1;
- (id)stateBySettingAllEntriesAsAuthorized:(_Bool)arg1;

@end
