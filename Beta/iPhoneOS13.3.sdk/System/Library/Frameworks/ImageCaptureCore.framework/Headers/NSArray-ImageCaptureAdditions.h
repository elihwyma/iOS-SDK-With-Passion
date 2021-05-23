/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSArray.h>

@interface NSArray (ImageCaptureAdditions)

+ (void)initialize;

- (id)copyGroupIntoDictionary:(CDUnknownBlockType)arg1;
- (unsigned long long)indexForInsertingObject:(id)arg1 sortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (unsigned long long)indexForInsertingObject:(id)arg1 sortDescriptor:(id)arg2;
- (unsigned long long)indexForInsertingObject:(id)arg1 sortSelector:(SEL)arg2;

@end
