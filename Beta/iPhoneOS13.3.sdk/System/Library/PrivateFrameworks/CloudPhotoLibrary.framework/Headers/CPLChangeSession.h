/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLLibraryManager, CPLPlatformObject, NSProgress, NSString;

@interface CPLChangeSession : NSObject

{
    CPLPlatformObject *_platformObject;
    NSProgress *_sessionProgress;
    NSString *_sessionIdentifier;
    CPLLibraryManager *_libraryManager;
    unsigned long long _state;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSProgress *sessionProgress;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) CPLLibraryManager *libraryManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)shortDescription;
+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (id)redactedDescription;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithLibraryManager:(id)arg1;
- (id)createSessionContext;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
