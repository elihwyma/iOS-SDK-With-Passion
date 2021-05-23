/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NetDiagnosticsShim;

@protocol OS_dispatch_queue, SymptomsFileCleanerDelegate;

__attribute__((visibility("hidden")))
@interface SymptomsFileCleaner : NSObject

{
    id <SymptomsFileCleanerDelegate> _delegate;
    NetDiagnosticsShim *_netDiags;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_filesToDelete;
}

@property (retain) NetDiagnosticsShim *netDiags;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSArray *filesToDelete;
@property (retain) id <SymptomsFileCleanerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)cleanupFiles:(id)arg1;
- (void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2;

@end
