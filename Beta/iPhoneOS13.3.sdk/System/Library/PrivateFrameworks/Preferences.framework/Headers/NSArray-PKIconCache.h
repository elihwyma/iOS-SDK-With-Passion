/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSArray.h>

@interface NSArray (PKIconCache)

+ (void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2 isInterfaceRTL:(_Bool)arg3;
+ (void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2;

- (id)specifierForID:(id)arg1;
- (unsigned long long)indexOfSpecifierWithID:(id)arg1;
- (id)arrayByPerformingSpecifierUpdatesUsingBlock:(CDUnknownBlockType)arg1;

@end
