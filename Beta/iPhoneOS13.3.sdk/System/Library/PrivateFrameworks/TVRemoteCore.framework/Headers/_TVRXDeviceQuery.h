/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, _TVRCMatchPointDeviceQuery, _TVRCMediaRemoteDeviceQuery, _TVRCRapportDeviceQuery;

@protocol _TVRXDeviceQueryDelegate;

@interface _TVRXDeviceQuery : NSObject

{
    _Bool _isRunning;
    id <_TVRXDeviceQueryDelegate> _delegate;
    NSMutableDictionary *_aggregateDevices;
    _TVRCMediaRemoteDeviceQuery *_mediaRemoteQuery;
    _TVRCRapportDeviceQuery *_rapportDeviceQuery;
    _TVRCMatchPointDeviceQuery *_matchPointQuery;
}

@property (nonatomic) _Bool isRunning;
@property (retain, nonatomic) NSMutableDictionary *aggregateDevices;
@property (retain, nonatomic) _TVRCMediaRemoteDeviceQuery *mediaRemoteQuery;
@property (retain, nonatomic) _TVRCRapportDeviceQuery *rapportDeviceQuery;
@property (retain, nonatomic) _TVRCMatchPointDeviceQuery *matchPointQuery;
@property (weak, nonatomic) id <_TVRXDeviceQueryDelegate> delegate;
@property (copy, nonatomic, readonly) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stop;
- (void)start;
- (void)_startSearch;
- (void)_notifyDelegateDidUpdateDevices;
- (void)_stopSearch;
- (id)_findAggregateForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_reevaluateAggregates;
- (void)mediaRemoteDeviceQuery:(id)arg1 addedTelevision:(id)arg2;
- (void)mediaRemoteDeviceQuery:(id)arg1 removedTelevision:(id)arg2;
- (void)rapportDeviceQuery:(id)arg1 addedDevice:(id)arg2;
- (void)rapportDeviceQuery:(id)arg1 removedDevice:(id)arg2;
- (void)matchpointDeviceQuery:(id)arg1 addedService:(id)arg2;
- (void)matchpointDeviceQuery:(id)arg1 removedService:(id)arg2;

@end
