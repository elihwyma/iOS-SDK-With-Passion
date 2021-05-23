/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class DKReporterRegistry;

@interface DKReportPlanner : NSObject

{
    DKReporterRegistry *_registry;
}

@property (retain, nonatomic) DKReporterRegistry *registry;

+ (id)plannerWithReportGeneratorRegistry:(id)arg1;

- (struct NSArray *)requestGroupsForPredicateManifest:(struct NSSet *)arg1;
- (id)initWithReportGeneratorRegistry:(id)arg1;
- (struct NSSet *)_resolveComponentIdentityManifest:(struct NSSet *)arg1;

@end
