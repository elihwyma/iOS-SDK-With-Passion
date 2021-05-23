/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSUserDefaults;

@interface FPPersistentStringSet : NSObject

{
    NSString *_key;
    NSMutableSet *_strings;
    NSUserDefaults *_defaults;
}

- (void)remove:(id)arg1;
- (void)save;
- (_Bool)contains:(id)arg1;
- (void)add:(id)arg1;
- (id)initWithDefaults:(id)arg1 key:(id)arg2;

@end
