/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLEngineLibrary, CPLSyncSession, NSString;

@protocol CPLEngineSyncTaskDelegate, NSCoding;

@interface CPLEngineSyncTask : NSObject

{
    _Bool _foreground;
    _Bool _forceSync;
    _Bool _cancelled;
    id <CPLEngineSyncTaskDelegate> _delegate;
    CPLEngineLibrary *_engineLibrary;
    CPLSyncSession *_session;
    id <NSCoding> _transportUserIdentifier;
    NSString *_phaseDescription;
}

@property (getter=isCancelled, setter=_setCancelled:) _Bool cancelled;
@property (retain) id <CPLEngineSyncTaskDelegate> delegate;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic, readonly) CPLSyncSession *session;
@property (retain, nonatomic) id <NSCoding> transportUserIdentifier;
@property (nonatomic) _Bool foreground;
@property (nonatomic) _Bool forceSync;
@property (nonatomic, readonly) NSString *taskIdentifier;
@property (readonly) NSString *phaseDescription;

+ (id)taskWithEngineLibrary:(id)arg1 session:(id)arg2;

- (id)description;
- (void)cancel;
- (void)launch;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (unsigned long long)diskPressureState;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;

@end
