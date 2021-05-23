/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSData : NSData

{
    struct ObjectStorage<API::Data> _data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
