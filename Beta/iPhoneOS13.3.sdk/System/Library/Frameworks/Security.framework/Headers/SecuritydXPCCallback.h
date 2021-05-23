/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecuritydXPCCallback : NSObject

{
    CDUnknownBlockType _callback;
}

@property (copy) CDUnknownBlockType callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)callCallback:(_Bool)arg1 error:(id)arg2;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end
