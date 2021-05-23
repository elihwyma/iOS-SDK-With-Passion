/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface PHContentEditingInputRequestOptions : NSObject

{
    _Bool _networkAccessAllowed;
    _Bool _shouldForceOriginalChoice;
    _Bool _dontAllowRAW;
    _Bool _forceRunAsUnadjustedAsset;
    _Bool _forceReturnFullLivePhoto;
    _Bool _forcePrepareCurrentBaseVersionInAddition;
    _Bool _editAsOvercapture;
    _Bool _loadResourcesToFlip;
    _Bool _skipDisplaySizeImage;
    CDUnknownBlockType _canHandleAdjustmentData;
    CDUnknownBlockType _progressHandler;
    long long _contentMode;
    CDUnknownBlockType _canHandleRAW;
    unsigned long long _originalChoice;
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;
    struct CGSize _targetSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldForceOriginalChoice;
@property (nonatomic) struct CGSize targetSize;
@property (nonatomic) long long contentMode;
@property (nonatomic) _Bool dontAllowRAW;
@property (copy, nonatomic) CDUnknownBlockType canHandleRAW;
@property (nonatomic) unsigned long long originalChoice;
@property (nonatomic) _Bool forceRunAsUnadjustedAsset;
@property (nonatomic) _Bool forceReturnFullLivePhoto;
@property (nonatomic) _Bool forcePrepareCurrentBaseVersionInAddition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) _Bool editAsOvercapture;
@property (nonatomic) _Bool loadResourcesToFlip;
@property (nonatomic) _Bool skipDisplaySizeImage;
@property (copy, nonatomic) CDUnknownBlockType canHandleAdjustmentData;
@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSynchronous;

@end
