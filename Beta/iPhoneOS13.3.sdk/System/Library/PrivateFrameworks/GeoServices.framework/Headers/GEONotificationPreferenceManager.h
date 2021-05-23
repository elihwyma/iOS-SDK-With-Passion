/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject

{
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (id)init;
- (void)reset;
- (_Bool)isEnabledForSubTestWithName:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forSubTestWithName:(id)arg2;

@end
