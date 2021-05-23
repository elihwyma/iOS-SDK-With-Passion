/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@interface CUIKRecents : NSObject

+ (id)locationForRecent:(id)arg1;
+ (_Bool)recentIsDirectoryLocation:(id)arg1;
+ (_Bool)recentDirectoryLocation:(id)arg1 matchesSource:(id)arg2;
+ (struct NSObject *)recentForLocation:(id)arg1 withAddressString:(id)arg2 andTitle:(id)arg3;
+ (struct NSObject *)recentForDirectoryLocation:(id)arg1 onSource:(id)arg2;
+ (id)directoryLocationForRecent:(id)arg1 onSource:(id)arg2;

@end
