/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject

{
    _Bool hasVideoComplement;
    _Bool isVideo;
    _Bool isSyncComplete;
    _Bool _cleanupSyncState;
    NSArray *facesInfo;
    NSURL *originalAssetURL;
    NSURL *videoComplementURL;
    NSString *uuid;
    NSDate *creationDate;
    NSDate *modificationDate;
    NSSet *albumURIs;
    CLLocation *location;
    NSNumber *sortToken;
    NSString *originalFileName;
    NSDate *_cleanupBeforeDate;
    CDUnknownBlockType _finishedBlock;
}

@property (retain, nonatomic) NSURL *originalAssetURL;
@property (nonatomic) _Bool hasVideoComplement;
@property (retain, nonatomic) NSURL *videoComplementURL;
@property (nonatomic) _Bool isVideo;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSSet *albumURIs;
@property (copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *facesInfo;
@property (retain, nonatomic) NSNumber *sortToken;
@property (retain, nonatomic) NSString *originalFileName;
@property (nonatomic) _Bool isSyncComplete;
@property (nonatomic) _Bool cleanupSyncState;
@property (copy, nonatomic) NSDate *cleanupBeforeDate;
@property (copy, nonatomic) CDUnknownBlockType finishedBlock;

- (id)description;
- (id)serializedData;
- (id)initFromSerializedData:(id)arg1;
- (void)processFacesWithBlock:(CDUnknownBlockType)arg1;

@end
