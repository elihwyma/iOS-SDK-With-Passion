/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSError, NSString, SSDownloadPhase;

@interface SSDownloadStatus : NSObject

{
    SSDownloadPhase *_activePhase;
    _Bool _contentRestricted;
    NSError *_error;
    _Bool _failed;
    _Bool _paused;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isContentRestricted) _Bool contentRestricted;
@property (nonatomic, getter=isFailed) _Bool failed;
@property (nonatomic, getter=isPausable) _Bool pausable;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic, readonly, getter=isFailedTransient) _Bool failedTransient;
@property (nonatomic, readonly) SSDownloadPhase *activePhase;
@property (nonatomic, readonly) float percentComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setOperationType:(long long)arg1;
- (void)setPercentComplete:(float)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)setOperationProgress:(id)arg1;

@end
