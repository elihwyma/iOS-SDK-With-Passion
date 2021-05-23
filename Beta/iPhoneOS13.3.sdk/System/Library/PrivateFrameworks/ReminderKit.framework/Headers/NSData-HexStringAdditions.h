/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSData.h>

@interface NSData (HexStringAdditions)

+ (id)rem_dataWithHexString:(id)arg1;
+ (id)dataFromBase64String:(id)arg1;

- (id)base64EncodedString;
- (id)TT_gzipInflate;
- (id)TT_gzipDeflate;

@end
