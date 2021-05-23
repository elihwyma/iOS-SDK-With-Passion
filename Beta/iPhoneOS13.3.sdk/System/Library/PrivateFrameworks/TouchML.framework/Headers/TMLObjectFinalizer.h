/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLObjectFinalizer : NSObject

{
    CDUnknownBlockType _block;
}

+ (void)runBlock:(CDUnknownBlockType)arg1 onFinalize:(id)arg2;

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
