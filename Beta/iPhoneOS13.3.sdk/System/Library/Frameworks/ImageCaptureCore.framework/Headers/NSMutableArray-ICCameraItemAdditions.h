/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (ICCameraItemAdditions)

- (void)addItemsMatchingType:(id)arg1 fromFolder:(id)arg2;
- (void)addTruth:(_Bool)arg1 code:(long long)arg2;
- (void)addItemsMatchingExtensions:(id)arg1 orTypes:(id)arg2 fromFolder:(id)arg3;
- (void)insertObject:(id)arg1 sortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)insertObject:(id)arg1 sortSelector:(SEL)arg2;
- (void)insertObject:(id)arg1 sortDescriptor:(id)arg2;

@end
