/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject

{
    unsigned long long _estimatedInitialSizeForLocalLibrary;
    unsigned long long _estimatedInitialAssetCountForLocalLibrary;
    CPLResetTracker *_resetTracker;
}

@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (retain, nonatomic) CPLResetTracker *resetTracker;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
