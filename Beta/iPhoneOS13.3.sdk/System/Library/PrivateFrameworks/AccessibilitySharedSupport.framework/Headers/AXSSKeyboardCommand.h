/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXSSKeyboardCommand : NSObject

{
    NSString *_type;
    NSString *_standardCommandIdentifier;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *standardCommandIdentifier;
@property (nonatomic, readonly) NSString *localizedName;

+ (_Bool)supportsSecureCoding;
+ (id)commandWithStandardCommandIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStandardCommandIdentifier:(id)arg1;
- (id)_initWithType:(id)arg1 standardCommandIdentifier:(id)arg2;
- (_Bool)isEqualToCommand:(id)arg1;

@end
