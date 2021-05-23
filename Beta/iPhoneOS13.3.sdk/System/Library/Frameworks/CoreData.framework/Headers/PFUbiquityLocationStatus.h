/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSError, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityLocationStatus : NSObject

{
    _Bool _isLive;
    _Bool _isDeleted;
    _Bool _isDownloaded;
    _Bool _isDownloading;
    _Bool _isUploaded;
    _Bool _isUploading;
    _Bool _isImported;
    _Bool _isScheduled;
    _Bool _isExported;
    _Bool _isFailed;
    PFUbiquityLocation *_location;
    NSError *_error;
    unsigned long long _hash;
    long long _numBytes;
    long long _numNotifications;
}

@property (nonatomic, readonly) _Bool isLive;
@property (nonatomic, readonly) _Bool isDeleted;
@property (nonatomic, readonly) _Bool isDownloaded;
@property (nonatomic) _Bool isDownloading;
@property (nonatomic, readonly) _Bool isUploaded;
@property (nonatomic, readonly) _Bool isUploading;
@property (nonatomic, readonly) _Bool isScheduled;
@property (nonatomic, readonly) _Bool isImported;
@property (nonatomic, readonly) _Bool isExported;
@property (nonatomic, readonly) _Bool isFailed;
@property (nonatomic, readonly) long long numBytes;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PFUbiquityLocation *location;
@property (nonatomic, readonly) long long numNotifications;

- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLocation:(id)arg1;
- (void)statusDidChange;
- (void)checkFileURLState;
- (void)logWasImported;
- (void)logWasScheduled;
- (void)logImportWasCancelled;
- (void)logWasExported;
- (void)encounteredError:(id)arg1;
- (void)recoveredFromError;

@end
