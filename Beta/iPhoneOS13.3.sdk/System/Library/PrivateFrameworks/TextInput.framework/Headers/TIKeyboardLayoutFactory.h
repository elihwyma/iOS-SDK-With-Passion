/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject

{
    void *_layoutsLibraryHandle;
    NSMutableDictionary *_internalCache;
}

@property (nonatomic, readonly) void *layoutsLibraryHandle;
@property (retain) NSMutableDictionary *internalCache;

+ (id)sharedKeyboardFactory;
+ (id)layoutsFileName;

- (id)init;
- (id)keyboardPrefixForWidth:(double)arg1 andEdge:(_Bool)arg2;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;

@end
