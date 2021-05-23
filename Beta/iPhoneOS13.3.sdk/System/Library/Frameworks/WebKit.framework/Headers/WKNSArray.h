/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSArray.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSArray : NSArray

{
    struct ObjectStorage<API::Array> _array;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
