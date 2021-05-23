/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKAsset, CKDCancelTokenGroup, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSIndexSet;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKPackageDownloadTask : NSObject

{
    NSError *_error;
    CKPackage *_package;
    CKAsset *_manifestAsset;
    NSArray *_sectionAssets;
    id _itemIndices;
    NSIndexSet *_sectionIndices;
    CKDProgressTracker *_progressTracker;
    CKDMMCSRequestOptions *_MMCSRequestOptions;
    NSObject<OS_dispatch_group> *_group;
    CKDCancelTokenGroup *_cancelTokens;
}

@property (retain) NSError *error;
@property (nonatomic, readonly) CKPackage *package;
@property (retain, nonatomic) CKAsset *manifestAsset;
@property (retain, nonatomic) NSArray *sectionAssets;
@property (retain, nonatomic) id itemIndices;
@property (retain, nonatomic) NSIndexSet *sectionIndices;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;
@property (retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;

- (void)cancel;
- (id)initWithPackage:(id)arg1 trackProgress:(_Bool)arg2;

@end
