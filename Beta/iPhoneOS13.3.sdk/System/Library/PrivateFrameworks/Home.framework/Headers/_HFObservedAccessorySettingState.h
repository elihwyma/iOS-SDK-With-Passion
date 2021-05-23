/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HMSetting, HMSettings, NSSet, NSString;

@interface _HFObservedAccessorySettingState : NSObject <Swift>

{
    HMSettings *_settings;
    HMSetting *_setting;
    NSSet *_selectionOptions;
}

@property (nonatomic, readonly) HMSettings *settings;
@property (nonatomic, readonly) HMSetting *setting;
@property (copy, nonatomic, readonly) NSSet *selectionOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)stateWithSettings:(id)arg1 forSetting:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSettings:(id)arg1 setting:(id)arg2;

@end
