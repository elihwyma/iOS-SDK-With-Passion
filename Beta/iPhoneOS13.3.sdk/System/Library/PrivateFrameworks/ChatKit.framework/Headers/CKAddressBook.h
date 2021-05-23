/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKAddressBook : NSObject

+ (void *)addressBook;
+ (id)locationSharingContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useCustomFont:(_Bool)arg3;
+ (id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(_Bool)arg3 customFont:(id)arg4;
+ (id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(_Bool)arg4 customFont:(id)arg5;
+ (id)contactImageCache;
+ (id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(_Bool)arg3;
+ (id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(_Bool)arg4;
+ (id)monogrammerProvider;
+ (id)transcriptContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2;
+ (void)flushMonogrammers;

@end
