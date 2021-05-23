/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKFullKeyboardAccessWatcher : NSObject

{
    _Bool fullKeyboardAccessEnabled;
}

+ (_Bool)fullKeyboardAccessEnabled;

- (id)init;
- (void)notifyAllProcessPools;
- (void)retrieveKeyboardUIModeFromPreferences:(id)arg1;

@end
