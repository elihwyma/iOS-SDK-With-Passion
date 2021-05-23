/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMAccessoryProfile.h>

@class NSArray;

@protocol _HMTelevisionProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMTelevisionProfile : _HMAccessoryProfile

{
    _Bool _mediaSourceDisplayOrderModifiable;
    NSArray *_mediaSourceDisplayOrder;
    id <_HMTelevisionProfileDelegate> _delegate;
}

@property (retain) NSArray *mediaSourceDisplayOrder;
@property (readonly) _Bool mediaSourceDisplayOrderModifiable;
@property (weak) id <_HMTelevisionProfileDelegate> delegate;

- (id)messageTargetUUID;
- (id)messageReceiveQueue;
- (void)_registerNotificationHandlers;
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;
- (id)messageDestination;
- (void)_handleSourceDisplayOrderUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1;
- (_Bool)isMediaSourceDisplayOrderModifiable;
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
