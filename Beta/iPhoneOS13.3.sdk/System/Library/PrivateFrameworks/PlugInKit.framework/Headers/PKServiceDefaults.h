/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults

{
    PKServicePersonality *_personality;
}

@property (weak) PKServicePersonality *personality;

- (_Bool)synchronize;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithPersonality:(id)arg1;

@end
