/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAThemeImage : SADomainObject

@property (copy, nonatomic) NSString *appearanceSetting;
@property (copy, nonatomic) NSData *dynamicImage;

+ (id)themeImage;
+ (id)themeImageWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
