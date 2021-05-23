/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, TVRCKeyboardAttributes;

@interface _TVRCKeyboardState : NSObject

{
    _Bool _isEditing;
    TVRCKeyboardAttributes *_attributes;
    NSString *_text;
}

@property (nonatomic) _Bool isEditing;
@property (copy, nonatomic) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

+ (_Bool)supportsSecureCoding;
+ (id)keyboardStateFromDevice:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end
