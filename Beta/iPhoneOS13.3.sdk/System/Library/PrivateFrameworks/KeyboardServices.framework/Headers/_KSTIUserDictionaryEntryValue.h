/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface _KSTIUserDictionaryEntryValue : NSObject

{
    NSString *_phrase;
    NSString *_shortcut;
    NSDate *_timestamp;
}

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)valueWithEntry:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matchesEntry:(id)arg1;
- (id)shortcutForSorting;

@end
