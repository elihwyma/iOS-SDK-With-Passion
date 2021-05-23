/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface ICStoreDialogResponse : NSObject <Swift>

{
    NSDictionary *_responseDictionary;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly, getter=isInitialCheckboxValue) _Bool initialCheckboxValue;
@property (nonatomic, readonly, getter=isBiometricAuthenticationAllowed) _Bool biometricAuthenticationAllowed;
@property (copy, nonatomic, readonly) NSString *message;
@property (copy, nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) long long defaultButtonType;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)_buttonWithType:(long long)arg1;
- (id)_buttonTitleKeyForType:(long long)arg1;
- (id)_buttonActionKeyForType:(long long)arg1;

@end
