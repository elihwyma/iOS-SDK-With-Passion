/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSSet, VCCoreDuetListener;

@interface VCShortcutsObliterator : NSObject

{
    VCCoreDuetListener *_listener;
    NSSet *_syncDataHandlers;
}

@property (nonatomic, readonly) VCCoreDuetListener *listener;
@property (nonatomic, readonly) NSSet *syncDataHandlers;

- (void)obliterate:(id *)arg1;
- (id)initWithCoreDuetListener:(id)arg1 syncDataHandlers:(id)arg2;
- (_Bool)deleteKeychainItemsWithError:(id *)arg1;
- (_Bool)deleteAppGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteDataVaultWithError:(id *)arg1;
- (_Bool)terminateProcessWithIdentifier:(id)arg1 assertion:(out id *)arg2 error:(out id *)arg3;
- (void)resetWatchSync;

@end
