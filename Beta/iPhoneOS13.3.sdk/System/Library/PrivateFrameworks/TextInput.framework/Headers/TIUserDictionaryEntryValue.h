/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TIUserDictionaryEntryValue : NSObject

{
    NSString *_phrase;
    NSString *_shortcut;
    NSNumber *_timestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSNumber *timestamp;

+ (_Bool)supportsSecureCoding;
+ (id)valueWithEntry:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matchesEntry:(id)arg1;
- (id)shortcutForSorting;

@end
