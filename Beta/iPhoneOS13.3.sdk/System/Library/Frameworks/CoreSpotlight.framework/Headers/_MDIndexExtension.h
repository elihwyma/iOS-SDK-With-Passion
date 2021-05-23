/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSExtension, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface _MDIndexExtension : NSObject

{
    _Bool _entitlementVerified;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_containerID;
    NSSet *_identifiers;
    NSExtension *_extension;
    NSString *_containerPath;
    NSString *_extensionID;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *containerPath;
@property (retain, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSString *extensionID;
@property (nonatomic) _Bool entitlementVerified;
@property (readonly) _Bool isEnabled;
@property (readonly) _Bool isInternal;
@property (readonly) _Bool dontRunDuringMigration;
@property (readonly) NSDictionary *infoDictionary;
@property (copy) NSSet *identifiers;

- (id)description;
- (_Bool)_verifyIntegrityWithHostContext:(id)arg1;
- (void)_performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4;
- (void)performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
