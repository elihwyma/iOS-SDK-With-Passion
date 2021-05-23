/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol HFCharacteristicValueSource;

@interface HFDemoModeAccessoryManager : NSObject

{
    id <HFCharacteristicValueSource> _valueSource;
    NSArray *_demoAccessories;
}

@property (retain, nonatomic) NSArray *demoAccessories;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;

+ (id)sharedManager;
+ (id)accessoryProfileName:(id)arg1;
+ (_Bool)isInternalAccessoryType:(id)arg1;
+ (_Bool)isValidExternalType:(id)arg1;
+ (id)profileURLForDemoModeAccessoryName:(id)arg1;
+ (id)configurationProfileFromAccessoryType:(id)arg1;
+ (id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;
+ (id)demoModeDirectoryURL;
+ (id)demoURLWithCameraName:(id)arg1 fileName:(id)arg2 extension:(id)arg3;
+ (id)_cameraClipForProfile:(id)arg1 url:(id)arg2 duration:(double)arg3;
+ (id)_clipStartDateFromComponents:(id)arg1 today:(id)arg2;
+ (id)_eventsFromString:(id)arg1 startDate:(id)arg2;
+ (_Bool)isPressDemoModeEnabled;
+ (id)imageIconDescriptorFromDictionary:(id)arg1;
+ (id)demoSnapshotURLForCameraName:(id)arg1;
+ (id)demoLiveStreamURLForCameraName:(id)arg1;
+ (id)clipsForCameraProfile:(id)arg1;

- (id)accessories;
- (id)initWithNullValueSource:(id)arg1;
- (void)saveAccessories;
- (void)dispatchUpdateMessageForAccessory:(id)arg1;

@end
