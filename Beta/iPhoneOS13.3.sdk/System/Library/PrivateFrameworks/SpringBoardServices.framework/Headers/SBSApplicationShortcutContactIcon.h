/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSData, NSString;

@interface SBSApplicationShortcutContactIcon

{
    NSString *_contactIdentifier;
    NSString *_firstName;
    NSString *_lastName;
    NSData *_imageData;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSData *imageData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_initForSubclass;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2;

@end
