/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class DKExtensionAdapter, NSMutableSet;

@interface DKReportingConcurrentRequest : NSObject

{
    DKExtensionAdapter *_generator;
    struct NSMutableSet *_manifest;
}

@property (retain, nonatomic) DKExtensionAdapter *generator;
@property (retain, nonatomic) NSMutableSet *manifest;

+ (id)concurrentRequestWithGenerator:(id)arg1;

- (id)initWithGenerator:(id)arg1;

@end
