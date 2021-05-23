/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIText : NSObject

+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCentered:(_Bool)arg3 includeChildren:(_Bool)arg4 state:(id)arg5;
+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCenteredHorizontally:(_Bool)arg3 isCenteredVertically:(_Bool)arg4 includeChildren:(_Bool)arg5 state:(id)arg6;
+ (id)baseListStyleForPoint:(id)arg1 shape:(id)arg2 isCentered:(_Bool)arg3 state:(id)arg4;
+ (void)addTextFromPoint:(id)arg1 level:(unsigned int)arg2 includeChildren:(_Bool)arg3 toShape:(id)arg4 baseListStyle:(id)arg5 state:(id)arg6;

@end
