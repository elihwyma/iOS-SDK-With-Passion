/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNCollationLanguage : NSObject

{
    NSArray *_sections;
    NSString *_lastCharacter;
    NSString *_firstCharacterAfterLanguage;
}

@property (readonly) NSArray *sections;
@property (readonly) NSString *lastCharacter;
@property (readonly) NSString *firstCharacterAfterLanguage;

- (id)initWithSections:(id)arg1 lastCharacter:(id)arg2 firstCharacterAfterLanguage:(id)arg3;

@end
