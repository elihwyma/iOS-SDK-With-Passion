/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLChangeSession.h>

@class CPLPlatformObject, NSString;

@interface CPLPushChangeSession : CPLChangeSession

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)shortDescription;

- (void)commitChangeBatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLibraryManager:(id)arg1;
- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(CDUnknownBlockType)arg2;

@end
