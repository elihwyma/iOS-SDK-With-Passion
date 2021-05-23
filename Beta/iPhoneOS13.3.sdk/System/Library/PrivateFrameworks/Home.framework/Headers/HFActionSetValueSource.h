/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFItemBuilder, HMActionSet, NSString;

@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate, HFCharacteristicOperationContextProviding;

@interface HFActionSetValueSource : NSObject

{
    HFItemBuilder<HFActionSetBuilderProtocol> *_actionSetBuilder;
    HMActionSet *_actionSet;
    id <HFActionSetValueSourceDelegate> _delegate;
}

@property (retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (retain, nonatomic) HMActionSet *actionSet;
@property (weak, nonatomic) id <HFActionSetValueSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFCharacteristicOperationContextProviding> contextProvider;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (void)commitTransactionWithReason:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)initWithActionSetBuilder:(id)arg1;
- (_Bool)hasPendingWritesForRouteID:(id)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
- (id)_targetValueForCharacteristic:(id)arg1;
- (id)_existingActionBuilderForCharacteristic:(id)arg1;
- (id)_existingActionBuilderForProfile:(id)arg1;
- (void)mediaValueUpdated:(id)arg1 playbackState:(long long)arg2 playbackArchive:(id)arg3;
- (id)_actionForCharacteristic:(id)arg1;
- (_Bool)_isCurrentStateCharacteristic:(id)arg1;
- (id)_valueForCurrentStateCharacteristic:(id)arg1;
- (id)initWithActionSet:(id)arg1;

@end
