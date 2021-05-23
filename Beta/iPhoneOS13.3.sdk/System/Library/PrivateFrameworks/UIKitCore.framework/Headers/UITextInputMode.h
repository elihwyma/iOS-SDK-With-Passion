/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UITextInputMode : NSObject <Swift>

@property (nonatomic, readonly) NSString *primaryLanguage;

+ (_Bool)supportsSecureCoding;
+ (id)currentInputMode;
+ (id)activeInputModes;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
