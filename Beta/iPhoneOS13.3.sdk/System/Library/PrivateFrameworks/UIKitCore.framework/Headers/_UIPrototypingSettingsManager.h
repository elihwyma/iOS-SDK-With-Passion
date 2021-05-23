/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIPrototypingSettingsManager : NSObject

{
    NSMutableDictionary *_storedSettings;
}

@property (retain, nonatomic) NSMutableDictionary *storedSettings;
@property (nonatomic, readonly) NSArray *allSettings;

+ (id)sharedManager;

- (id)init;
- (void)synchronizeStoredSettings;
- (id)settingOfType:(long long)arg1 withName:(id)arg2;
- (void)deleteAllStoredSettings;

@end
