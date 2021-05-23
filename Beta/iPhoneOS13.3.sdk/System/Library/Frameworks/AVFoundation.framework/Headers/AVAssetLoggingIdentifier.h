/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetLoggingIdentifierInternal, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetLoggingIdentifier : NSObject

{
    AVAssetLoggingIdentifierInternal *_priv;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *name;

- (id)init;
- (void)dealloc;
- (id)makeDerivedIdentifier;

@end
