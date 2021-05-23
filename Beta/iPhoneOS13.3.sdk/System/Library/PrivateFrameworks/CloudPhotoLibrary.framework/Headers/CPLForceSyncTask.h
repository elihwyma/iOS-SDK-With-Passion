/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject

{
    _Bool _cancelled;
    NSArray *_scopeIdentifiers;
    NSString *_taskIdentifier;
}

@property (copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic, readonly) NSArray *scopeIdentifiers;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;

- (id)description;
- (void)launch;
- (void)cancelTask;
- (id)initWithScopeIdentifiers:(id)arg1;

@end
