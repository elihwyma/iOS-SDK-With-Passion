/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerLoggingIdentifierInternal, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerLoggingIdentifier : NSObject

{
    AVPlayerLoggingIdentifierInternal *_priv;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *name;

- (id)init;
- (void)dealloc;

@end
