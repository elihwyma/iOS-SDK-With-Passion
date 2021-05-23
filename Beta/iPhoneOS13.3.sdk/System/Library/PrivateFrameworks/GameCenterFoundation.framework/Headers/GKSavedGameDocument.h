/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSFileVersion, NSOperationQueue, NSSet, NSString, NSURL;

@interface GKSavedGameDocument : NSObject

{
    _Bool _hasConflict;
    _Bool _isConflictVersion;
    NSURL *_fileURL;
    NSString *_name;
    NSFileVersion *_fileVersion;
    NSString *_deviceName;
    NSDate *_modificationDate;
}

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSFileVersion *fileVersion;
@property (nonatomic) _Bool hasConflict;
@property (nonatomic) _Bool isConflictVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

+ (id)currentDeviceName;

- (void)dealloc;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)initWithFileURL:(id)arg1;
- (void)updateMetadata;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllVersionsIncludingCurrent:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateConflictStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteConflictVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
