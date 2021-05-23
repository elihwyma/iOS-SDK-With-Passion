/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PACSRefWrapper : NSObject

{
    struct _CSTypeRef _csRef;
}

@property (readonly) struct _CSTypeRef csRef;

- (void)dealloc;
- (id)initWithCSTypeRef:(struct _CSTypeRef)arg1;

@end
