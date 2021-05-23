/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCPLServiceUI, PXMomentShareStatus;

@protocol PXDisplayMomentShare;

@interface PXMomentShareStatusPresentation : PXObservable <Swift>

{
    PXCPLServiceUI *_cplServiceUI;
    _Bool _isPaused;
    float _activityProgress;
    long long _type;
    NSString *_assetsTitle;
    NSString *_expirationTitle;
    NSString *_activityTitle;
    NSString *_idleTitle;
    NSString *_pauseTitle;
    NSString *_byline;
    long long _state;
    long long _presentationStyle;
    PXMomentShareStatus *_momentShareStatus;
    long long _numberOfAssetsNotCopied;
    NSString *_pauseStatusDescription;
}

@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) PXMomentShareStatus *momentShareStatus;
@property (copy, nonatomic) NSString *assetsTitle;
@property (copy, nonatomic) NSString *expirationTitle;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *idleTitle;
@property (copy, nonatomic) NSString *pauseTitle;
@property (copy, nonatomic) NSString *byline;
@property (nonatomic) float activityProgress;
@property (nonatomic) long long numberOfAssetsNotCopied;
@property (nonatomic) _Bool isPaused;
@property (copy, nonatomic) NSString *pauseStatusDescription;
@property (nonatomic, readonly) id <PXDisplayMomentShare> momentShare;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)setType:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (id)initWithMomentShareStatus:(id)arg1 presentationStyle:(long long)arg2;
- (id)initWithMomentShare:(id)arg1 presentationStyle:(long long)arg2;
- (void)_updateCountsAndStatus;
- (void)_updatePausedStatus;

@end
