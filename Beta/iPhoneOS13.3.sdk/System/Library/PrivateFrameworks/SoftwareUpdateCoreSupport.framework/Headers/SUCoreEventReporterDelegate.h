/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSString, SUCoreEventReporter;

__attribute__((visibility("hidden")))
@interface SUCoreEventReporterDelegate : NSObject

{
    SUCoreEventReporter *_reporter;
}

@property (weak, nonatomic) SUCoreEventReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)initWithReporter:(id)arg1;

@end
