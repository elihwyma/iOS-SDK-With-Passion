/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDCancelTokenGroup, CKDMMCSItem, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKPackageUploadTask : NSObject

{
    NSError *_error;
    CKPackage *_package;
    CKDMMCSItem *_MMCSManifestItem;
    NSArray *_MMCSSectionItems;
    CKDProgressTracker *_progressTracker;
    CKDMMCSRequestOptions *_MMCSRequestOptions;
    NSObject<OS_dispatch_group> *_group;
    CKDCancelTokenGroup *_cancelTokens;
}

@property (retain) NSError *error;
@property (nonatomic, readonly) CKPackage *package;
@property (retain, nonatomic) CKDMMCSItem *MMCSManifestItem;
@property (retain, nonatomic) NSArray *MMCSSectionItems;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;
@property (retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic, readonly) long long storageGroupingPolicy;
@property (nonatomic, readonly) long long uploadRank;
@property (nonatomic, readonly) NSString *recordKey;

- (void)cancel;
- (id)activityCreate;
- (id)initWithPackage:(id)arg1 trackProgress:(_Bool)arg2;

@end
