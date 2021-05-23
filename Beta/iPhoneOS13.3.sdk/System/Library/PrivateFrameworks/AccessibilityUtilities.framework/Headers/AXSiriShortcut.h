/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXSiriShortcut : NSObject

{
    NSString *_identifier;
    NSString *_shortcutName;
    NSString *_phrase;
    NSString *_associatedAppBundleIdentifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *shortcutName;
@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
