/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPBEnumDescriptor : NSObject

{
    NSString *name_;
    const char *valueNames_;
    const int *values_;
    CDUnknownFunctionPointerType enumVerifier_;
    const char *extraTextFormatInfo_;
    unsigned int *nameOffsets_;
    unsigned int valueCount_;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CDUnknownFunctionPointerType enumVerifier;
@property (nonatomic, readonly) unsigned int enumNameCount;

+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;
+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5 extraTextFormatInfo:(const char *)arg6;

- (void)dealloc;
- (id)initWithName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;
- (id)getEnumNameForIndex:(unsigned int)arg1;
- (void)calcValueNameOffsets;
- (id)textFormatNameForValue:(int)arg1;
- (id)getEnumTextFormatNameForIndex:(unsigned int)arg1;
- (id)enumNameForValue:(int)arg1;
- (_Bool)getValue:(int *)arg1 forEnumName:(id)arg2;
- (_Bool)getValue:(int *)arg1 forEnumTextFormatName:(id)arg2;

@end
