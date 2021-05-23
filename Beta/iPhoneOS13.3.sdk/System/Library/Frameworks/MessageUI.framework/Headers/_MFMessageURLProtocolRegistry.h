/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _MFMessageURLProtocolRegistry : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMapTable *_storage;
}

@property (nonatomic, readonly) NSMapTable *storage;

+ (id)sharedRegistry;

- (id)init;
- (void)registerContentRepresentation:(id)arg1;
- (id)contentRepresentationForURL:(id)arg1;

@end
