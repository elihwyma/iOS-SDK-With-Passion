/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSProgress, NSString;

@protocol PXInfoProvider, PXInfoUpdaterObserver;

@interface PXInfoUpdater : NSObject

{
    struct {
        _Bool priorityForInfoRequestOfKind;
    } _infoProviderRespondsTo;
    struct {
        _Bool shouldUpdate;
    } _observerRespondsTo;
    _Bool _shouldUpdateInfo;
    _Bool _isUpdatingInfo;
    id _info;
    id <PXInfoProvider> _infoProvider;
    NSString *_infoKind;
    id <PXInfoUpdaterObserver> _observer;
    long long _currentUpdateGeneration;
    long long _currentUpdatePriority;
    NSProgress *_currentUpdateProgress;
}

@property (retain, nonatomic) id info;
@property (nonatomic) _Bool shouldUpdateInfo;
@property (nonatomic) _Bool isUpdatingInfo;
@property (nonatomic) long long currentUpdateGeneration;
@property (nonatomic) long long currentUpdatePriority;
@property (retain, nonatomic) NSProgress *currentUpdateProgress;
@property (weak, nonatomic, readonly) id <PXInfoProvider> infoProvider;
@property (copy, nonatomic, readonly) NSString *infoKind;
@property (weak, nonatomic) id <PXInfoUpdaterObserver> observer;

- (id)init;
- (void)_updateInfo;
- (id)initWithInfoProvider:(id)arg1 infoKind:(id)arg2;
- (void)invalidateInfo;
- (void)_updateInfoIfNeeded;
- (void)_handleCurrentUpdateWithInfo:(id)arg1 generation:(long long)arg2;
- (void)performBlockWhenDoneUpdating:(CDUnknownBlockType)arg1;

@end
