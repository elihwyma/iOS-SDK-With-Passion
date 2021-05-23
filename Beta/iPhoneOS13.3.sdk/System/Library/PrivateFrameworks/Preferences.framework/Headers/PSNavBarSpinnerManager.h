/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject

{
    NSMutableDictionary *_savedRecords;
}

+ (id)sharedSpinnerManager;

- (id)init;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(_Bool)arg3;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)stopAnimatingForIdentifier:(id)arg1;

@end
