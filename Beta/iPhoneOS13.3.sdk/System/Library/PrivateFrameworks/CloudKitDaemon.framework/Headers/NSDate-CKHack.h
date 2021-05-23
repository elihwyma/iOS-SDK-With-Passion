/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (CKHack)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ck_dateFormatterWithString:(id)arg1;
+ (id)ck_dateWithNaturalLanguageString:(id)arg1;
+ (id)CKSharedCalendar;

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
