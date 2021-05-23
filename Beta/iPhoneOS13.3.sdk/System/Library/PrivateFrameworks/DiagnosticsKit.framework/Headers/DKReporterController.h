/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

#import <DiagnosticsKit/Swift-Protocol.h>

@class DKComponentIdentity, DKReporterContext, NSString;

@interface DKReporterController : NSObject <Swift>

{
    DKComponentIdentity *_componentIdentity;
    DKReporterContext *_context;
}

@property (retain, nonatomic) DKReporterContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) DKComponentIdentity *componentIdentity;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)start;
- (_Bool)isPresent;
- (void)setComponentIdentity:(id)arg1;
- (void)setupWithContext:(id)arg1;
- (void)populateAttributes:(struct NSMutableDictionary *)arg1;

@end
