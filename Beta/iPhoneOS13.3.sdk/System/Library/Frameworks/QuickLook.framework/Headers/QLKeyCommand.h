/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class UIKeyCommand;

__attribute__((visibility("hidden")))
@interface QLKeyCommand : NSObject

{
    UIKeyCommand *_keyCommand;
    unsigned long long _keyCommandIdentifier;
}

@property (retain, nonatomic) UIKeyCommand *keyCommand;
@property unsigned long long keyCommandIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)keyCommandWithKeyCommand:(id)arg1 identifier:(unsigned long long)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
