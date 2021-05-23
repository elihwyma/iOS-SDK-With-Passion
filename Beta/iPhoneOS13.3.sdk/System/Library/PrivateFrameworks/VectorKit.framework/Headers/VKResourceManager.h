/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSBundle;

@interface VKResourceManager : NSObject

{
    NSBundle *_vkBundle;
}

- (id)init;
- (void)dealloc;
- (id)pathForResourceWithName:(id)arg1;
- (id)dataForResourceWithName:(id)arg1;
- (_Bool)isDevResourceWithName:(id)arg1;
- (id)_localNameForResourceName:(id)arg1;

@end
