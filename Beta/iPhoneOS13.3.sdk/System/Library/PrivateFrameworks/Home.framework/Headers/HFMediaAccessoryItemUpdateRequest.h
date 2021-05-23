/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMHome;

@protocol HFCharacteristicValueSource, HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaAccessoryItemUpdateRequest : NSObject

{
    id <HFMediaValueSource> _mediaValueSource;
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
    id <HFMediaProfileContainer> _mediaProfile;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) id <HFMediaValueSource> mediaValueSource;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfile;

- (id)init;
- (id)accessories;
- (id)updateWithOptions:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 valueSource:(id)arg2;
- (id)_parentMediaSystem;
- (void)_appendSplitMediaAccountErrorIfNeededForAccessory:(id)arg1 toResults:(id)arg2;
- (id)_disambiguateMultipleAccessoryResponses:(id)arg1 forMediaSystem:(id)arg2;
- (void)_appendSplitMediaAccountErrorForAccessory:(id)arg1 toResults:(id)arg2;

@end
