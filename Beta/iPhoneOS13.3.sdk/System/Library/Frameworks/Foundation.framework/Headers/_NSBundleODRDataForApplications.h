/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSBundleODRDataCommon.h>

@class NSDictionary, NSMutableSet, NSObject, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon

{
    NSDictionary *_tagToTagState;
    NSMutableSet *_extensionConnections;
    NSObject<OS_dispatch_group> *_initialStateGroup;
    NSString *_rootSandboxPath;
}

+ (id)dataForBundle:(id)arg1 createIfRequired:(_Bool)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithBundle:(id)arg1;
- (_Bool)assetPacksBecameAvailable:(id)arg1 error:(id *)arg2;
- (_Bool)assetPacksBecameUnavailable:(id)arg1 error:(id *)arg2;
- (_Bool)_waitForDaemon;
- (void)addExtensionEndpoint:(id)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;

@end
