/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSiriIntelligenceSettings : NSObject

{
    _Atomic _Bool _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (id)init;
- (void)dealloc;
- (_Bool)shouldShowSiriSuggestions;
- (void)setShouldShowSiriSuggestions:(_Bool)arg1;

@end
