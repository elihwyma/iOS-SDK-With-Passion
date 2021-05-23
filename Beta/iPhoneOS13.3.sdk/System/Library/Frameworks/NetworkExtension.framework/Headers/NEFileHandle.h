/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSFileHandle;

@protocol OS_xpc_object;

@interface NEFileHandle : NSObject

{
    _Bool _launchOwnerWhenReadable;
    NSFileHandle *_handle;
}

@property (readonly) unsigned long long type;
@property (readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) _Bool launchOwnerWhenReadable;
@property (readonly) NSFileHandle *handle;

+ (id)fileHandleFromDictionary:(id)arg1;

- (id)initFromDictionary:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(_Bool)arg2;

@end
