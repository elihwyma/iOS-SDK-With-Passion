/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSDictionary;

@interface VCSpotlightState : NSObject

{
    unsigned long long _identifier;
    NSDictionary *_syncedShortcuts;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSDictionary *syncedShortcuts;

- (id)initWithPath:(id)arg1;
- (void)saveToPath:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 syncedShortcuts:(id)arg2;

@end
