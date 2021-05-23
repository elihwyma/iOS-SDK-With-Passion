/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

@interface QLToolbarButtonOption : NSObject

{
    NSString *_identifier;
    NSString *_title;
    long long _style;
}

@property (readonly) NSString *identifier;
@property (copy) NSString *title;
@property long long style;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
