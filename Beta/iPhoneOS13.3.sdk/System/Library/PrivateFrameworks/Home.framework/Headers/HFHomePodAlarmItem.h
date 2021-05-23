/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class MTAlarm, NSString;

@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItem : HFItem <Swift>

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    MTAlarm *_alarm;
    NSString *_alarmIdentifier;
}

@property (copy, nonatomic) NSString *alarmIdentifier;
@property (copy, nonatomic) MTAlarm *alarm;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2;

@end
