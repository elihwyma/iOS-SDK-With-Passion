/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@interface TSUCustomFormatWrapper : NSObject

{
    struct TSUCustomFormat *mCustomFormat;
}

- (id)initWithCustomFormat:(struct TSUCustomFormat *)arg1;
- (id)formatName;
- (const struct TSUCustomFormat *)pointerToTSUCustomFormat;
- (int)formatType;
- (const CDStruct_8acff13f *)defaultFormatData;
- (const CDStruct_8acff13f *)conditionalFormatDataForValue:(double)arg1;

@end
