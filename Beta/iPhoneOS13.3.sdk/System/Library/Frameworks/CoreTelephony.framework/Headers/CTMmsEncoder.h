/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CTMmsEncoder : NSObject

+ (id)encodeSms:(id)arg1;
+ (id)encodeMessage:(id)arg1;
+ (id)decodeMessageFromData:(id)arg1 data:(id)arg2;
+ (id)decodeSmsFromData:(id)arg1 data:(id)arg2;
+ (id)decodeSmsFromData:(id)arg1;
+ (id)decodeMessageFromData:(id)arg1;

@end
