/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBShading : NSObject

+ (void)write:(id)arg1 to:(struct WrdShading *)arg2;
+ (void)readFrom:(struct WrdShading *)arg1 to:(id)arg2;
+ (void)setToSolidWhite:(id)arg1;
+ (struct CsColour)fixedUpVersionOfColor:(struct CsColour)arg1;

@end
