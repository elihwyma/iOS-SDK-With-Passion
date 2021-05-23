/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMapTable;

__attribute__((visibility("hidden")))
@interface _MFMessageContentURLProtocolRegistry : NSObject

{
    NSLock *_lock;
    NSMapTable *_storage;
}

@property (nonatomic, readonly) NSMapTable *storage;

+ (id)sharedRegistry;

- (id)init;
- (id)URLForLoadingContext:(id)arg1 scheme:(id)arg2;
- (id)loadingContextForURL:(id)arg1;

@end
