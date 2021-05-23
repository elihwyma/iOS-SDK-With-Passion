/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, TUMomentsControllerDataSource, TUMomentsControllerDelegate;

@interface TUMomentsController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUMomentsControllerDataSource> _dataSource;
    id <TUMomentsControllerDelegate> _delegate;
    NSMutableDictionary *_capabilitiesByVideoStreamToken;
    NSMutableDictionary *_providerByVideoStreamToken;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <TUMomentsControllerDataSource> dataSource;
@property (weak, nonatomic, readonly) id <TUMomentsControllerDelegate> delegate;
@property (nonatomic, readonly) NSMutableDictionary *capabilitiesByVideoStreamToken;
@property (nonatomic, readonly) NSMutableDictionary *providerByVideoStreamToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isFaceTimePhotosRestricted;
+ (_Bool)isFaceTimePhotosEnabled;
+ (_Bool)isFaceTimePhotosEnabledByDefault;
+ (CDUnknownBlockType)faceTimePhotosEnabledDeterminer;
+ (void)setFaceTimePhotosEnabledDeterminer:(CDUnknownBlockType)arg1;
+ (void)setFaceTimePhotosEnabled:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;
- (void)endRequestWithTransactionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3;
- (void)dataSource:(id)arg1 willCaptureRemoteRequestFromRequesterID:(id)arg2;
- (void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2;
- (void)serverDiedForDataSource:(id)arg1;
- (void)startRequestWithMediaType:(int)arg1 forProvider:(id)arg2 requesteeID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)capabilitiesForProvider:(id)arg1;

@end
