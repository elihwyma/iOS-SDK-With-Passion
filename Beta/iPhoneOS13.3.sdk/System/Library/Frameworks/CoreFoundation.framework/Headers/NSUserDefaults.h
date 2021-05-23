/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSUserDefaults : NSObject

{
    id _kvo_;
    struct __CFString *_identifier_;
    struct __CFString *_container_;
    void *_reserved[2];
}

- (struct __CFString *)_identifier;
- (struct __CFString *)_container;
- (void)_setIdentifier:(struct __CFString *)arg1;
- (void)_setContainer:(struct __CFURL *)arg1;
- (_Bool)_observingCFPreferences;

@end
