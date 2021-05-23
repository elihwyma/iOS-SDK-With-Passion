/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class DKExtensionDiscovery, DKReportPlanner, DKReporterRegistry, NSArray, NSString;

@protocol OS_dispatch_queue;

@interface DKReportManager : NSObject

{
    _Bool _cancelled;
    NSArray *_availableReportGenerators;
    struct NSString *_bundleIdentifier;
    DKReporterRegistry *_registry;
    DKReportPlanner *_planner;
    DKExtensionDiscovery *_discovery;
    NSObject<OS_dispatch_queue> *_reportManagerQueue;
}

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) DKReporterRegistry *registry;
@property (retain, nonatomic) DKReportPlanner *planner;
@property (retain, nonatomic) DKExtensionDiscovery *discovery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportManagerQueue;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (retain, nonatomic) NSArray *availableReportGenerators;

- (id)init;
- (id)initWithBundleIdentifier:(struct NSString *)arg1;
- (id)sendRequestsForGroup:(id)arg1 concurrent:(_Bool)arg2 failOnError:(_Bool)arg3 error:(id *)arg4;
- (void)reportWithComponentPredicateManifest:(struct NSSet *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportersWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelAllReports;

@end
