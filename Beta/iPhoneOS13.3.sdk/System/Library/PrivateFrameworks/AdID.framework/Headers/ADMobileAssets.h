/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <Foundation/NSObject.h>

@class ADBackgroundTaskRequest, NSArray, NSDate, NSNumber, NSString, NSURL;

@protocol OS_dispatch_queue_global;

@interface ADMobileAssets : NSObject

{
    _Bool _operationInProgress;
    NSString *_assetType;
    NSString *_version;
    NSURL *_assetPath;
    NSNumber *_maxQueryElements;
    NSArray *_lookbackPeriods;
    ADBackgroundTaskRequest *_task;
    NSDate *_creationTime;
    NSObject<OS_dispatch_queue_global> *_assetQueue;
}

@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSURL *assetPath;
@property (retain, nonatomic) NSNumber *maxQueryElements;
@property (retain, nonatomic) NSArray *lookbackPeriods;
@property (retain, nonatomic) ADBackgroundTaskRequest *task;
@property (retain, nonatomic) NSDate *creationTime;
@property _Bool operationInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue_global> *assetQueue;

- (_Bool)shouldStartOperations;
- (void)doneWithOperations;
- (void)findProperAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAsset:(id)arg1 andTask:(id)arg2;
- (void)downloadAssetCatalog:(CDUnknownBlockType)arg1;
- (void)queryAssetData:(CDUnknownBlockType)arg1;
- (void)createAppUsageVectors:(CDUnknownBlockType)arg1;

@end
