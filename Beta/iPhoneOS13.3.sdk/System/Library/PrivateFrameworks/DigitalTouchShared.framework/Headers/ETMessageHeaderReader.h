/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <Foundation/NSObject.h>

@interface ETMessageHeaderReader : NSObject

+ (id)identifierInArchive:(id)arg1;
+ (unsigned short)messageTypeInArchive:(id)arg1;
+ (void)getSendTime:(double *)arg1 type:(unsigned short *)arg2 inArchive:(id)arg3;
+ (double)sendTimeInArchive:(id)arg1;

@end
