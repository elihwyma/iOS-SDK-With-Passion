/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AnalyticsWorkspace;

@protocol OS_dispatch_queue;

@interface ImpoExpoService : NSObject

{
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *queue;
}

+ (id)_supportedClasses;
+ (id)impoExpoServiceInWorkspace:(id)arg1 andQueue:(id)arg2;
+ (_Bool)_supportArchivingOfObject:(id)arg1;

- (id)listItemsNameWithPrefix:(id)arg1 sortDescriptor:(id)arg2;
- (id)exportAndUnarchiveItemUnderName:(id)arg1 lastUpdated:(id *)arg2 verificationBlock:(CDUnknownBlockType)arg3;
- (_Bool)archiveAndImportItemUnderName:(id)arg1 item:(id)arg2;
- (id)exportItemUnderName:(id)arg1 lastUpdated:(id *)arg2 verificationBlock:(CDUnknownBlockType)arg3;
- (_Bool)importItemUnderName:(id)arg1 item:(id)arg2;
- (long long)deleteItemsWithPrefix:(id)arg1;
- (id)_nameSubfix;
- (id)_initInWorkspace:(id)arg1 andQueue:(id)arg2;
- (id)_locateRecord:(id)arg1 createMissing:(_Bool)arg2;
- (void)deleteItemsWithNames:(id)arg1;
- (long long)_deleteItemsMatchingPredicate:(id)arg1;
- (_Bool)importValueUnderName:(id)arg1 value:(unsigned long long)arg2;
- (unsigned long long)exportValueUnderName:(id)arg1 lastUpdated:(id *)arg2;
- (long long)deleteItemsWithPrefixes:(id)arg1;

@end
