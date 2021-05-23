/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@interface SGLazyInit : NSObject

{
    CDUnknownBlockType _initializer;
    CDUnknownBlockType _destructor;
    id _cachedObject;
}

- (void)dealloc;
- (id)getObject;
- (id)initWithInitializer:(CDUnknownBlockType)arg1 destructor:(CDUnknownBlockType)arg2;
- (id)peekAtCachedObject;
- (void)destroyCachedObject;

@end
