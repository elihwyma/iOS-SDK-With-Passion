/*
 Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

#import <Foundation/NSObject.h>

@class EMFEmojiPreferences, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface EMFEmojiPreferencesService : NSObject

{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    EMFEmojiPreferences *_preferences;
}

@property (retain, nonatomic) EMFEmojiPreferences *preferences;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServiceWithMachName:(id)arg1;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMachName:(id)arg1;
- (void)_createPreferencesIfNecessary;

@end
