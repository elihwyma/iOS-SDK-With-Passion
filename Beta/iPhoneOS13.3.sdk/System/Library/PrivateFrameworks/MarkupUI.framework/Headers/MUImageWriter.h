/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageWriter : NSObject

- (id)encodedModelFromAnnotationsController:(id)arg1 encrypt:(_Bool)arg2;
- (_Bool)writeUsingBaseImage:(id)arg1 withAnnotationsFromController:(id)arg2 asImageOfType:(id)arg3 toConsumer:(struct CGDataConsumer *)arg4 embedSourceImageAndAnnotationsAsMetadata:(_Bool)arg5 encryptPrivateMetadata:(_Bool)arg6 error:(id *)arg7;

@end
