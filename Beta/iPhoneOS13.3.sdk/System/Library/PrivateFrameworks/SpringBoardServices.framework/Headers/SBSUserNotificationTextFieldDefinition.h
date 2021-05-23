/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject

{
    NSString *_title;
    NSString *_value;
    _Bool _isSecure;
    _Bool _hasSetMaxLength;
    unsigned long long _maxLength;
    long long _keyboardType;
    long long _autocorrectionType;
    long long _autocapitalizationType;
}

@property (nonatomic, readonly) _Bool _hasSetMaxLength;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *value;
@property (nonatomic, readonly, getter=isSecure) _Bool secure;
@property (nonatomic, readonly) unsigned long long maxLength;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) long long autocapitalizationType;
@property (nonatomic, readonly) long long autocorrectionType;

+ (id)_definitionsFromSerializedDefinitions:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)build;
- (id)_initWithDictionary:(id)arg1;
- (void)_copyPropertiesToDefinition:(id)arg1;

@end
