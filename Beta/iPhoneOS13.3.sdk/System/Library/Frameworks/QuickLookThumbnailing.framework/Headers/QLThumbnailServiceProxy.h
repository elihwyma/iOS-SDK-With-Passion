/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol QLThumbnailAdditionIndexInterface, QLThumbnailsInterface;

@interface QLThumbnailServiceProxy : NSObject

{
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
    NSObject<QLThumbnailAdditionIndexInterface> *_indexProxy;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2;
- (void)askThumbnailAdditionIndex:(CDUnknownBlockType)arg1;
- (id)indexProxy;
- (void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2;

@end
