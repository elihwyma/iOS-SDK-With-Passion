/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@interface TPSDiscoverabilityUtilities : NSObject

+ (id)_dateFormatter;
+ (id)secureUnarchiveForKey:(id)arg1 classSet:(id)arg2;
+ (void)secureArchive:(id)arg1 forKey:(id)arg2;
+ (id)secureUnarchiveForKey:(id)arg1 classSet:(id)arg2 userDefaults:(id)arg3;
+ (void)secureArchive:(id)arg1 forKey:(id)arg2 userDefaults:(id)arg3;
+ (_Bool)isDateExpired:(id)arg1 maxTimeInterval:(double)arg2;
+ (_Bool)isDateExpired:(id)arg1;

@end
