/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSDictionary;

@interface HMLocalization : NSObject

{
    HMFUnfairLock *_lock;
    NSDictionary *_localizedStrings;
}

@property (nonatomic, readonly) NSDictionary *localizedStrings;

+ (id)sharedManager;

- (id)init;
- (id)getLocalizedOrCustomString:(id)arg1;
- (id)getLocalizedString:(id)arg1;
- (void)_updateLocalizedStrings;
- (void)handleLocaleDidChange:(id)arg1;

@end
