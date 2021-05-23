/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@interface TRILazyObject : NSObject

{
    _Bool _isInitialized;
    CDUnknownBlockType _getter;
    id _object;
}

@property (readonly) id object;

+ (id)objectWithGetter:(CDUnknownBlockType)arg1;

- (void)reset;
- (id)initWithGetter:(CDUnknownBlockType)arg1;

@end
