/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

#import <AppleAccountUI/Swift-Protocol.h>

@interface AAUIDataclassOption : NSObject <Swift>

{
    _Bool _editable;
    _Bool _enabled;
}

@property (nonatomic, getter=isEditable) _Bool editable;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActions:(id)arg1;

@end
