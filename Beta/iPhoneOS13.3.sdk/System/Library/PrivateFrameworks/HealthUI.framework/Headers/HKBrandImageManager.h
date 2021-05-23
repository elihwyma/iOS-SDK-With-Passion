/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthRecordsStore, NSCache, NSMutableDictionary, NSOperationQueue;

@interface HKBrandImageManager : NSObject

{
    NSCache *_fetchedImages;
    NSMutableDictionary *_outstandingRequests;
    HKHealthRecordsStore *_healthRecordsStore;
    NSOperationQueue *_fileOperationQueue;
}

@property (retain) NSOperationQueue *fileOperationQueue;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (retain, nonatomic) NSCache *fetchedImages;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;

+ (double)defaultLogoDimension;
+ (id)imageManagerWithHealthRecordsStore:(id)arg1;
+ (id)_fetchOrCreateSalt;

- (void)cacheFeaturedBrandLogosWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveLogoForBrand:(id)arg1 size:(double)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithHealthRecordsStore:(id)arg1;
- (id)_scaleKeyForCurrentDevice;
- (void)processFetchResponseWithData:(id)arg1 error:(id)arg2 brand:(id)arg3;
- (id)loadStoredLogoForBrand:(id)arg1;
- (void)onMainQueue:(CDUnknownBlockType)arg1;
- (void)fetchLogoForBrand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_logoURLForBrand:(id)arg1;
- (void)dispatchResponsesForBrand:(id)arg1 image:(id)arg2 error:(id)arg3;
- (void)_writeImageData:(id)arg1 brand:(id)arg2;
- (id)_hashedSaltedStringFromString:(id)arg1;

@end
