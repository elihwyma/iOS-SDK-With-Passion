/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBSUserNotificationButtonDefinition : NSObject

{
    NSString *_title;
    int _presentationStyle;
    _Bool _isPreferredButton;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int presentationStyle;
@property (nonatomic, readonly) _Bool isPreferredButton;

+ (id)_buttonDefinitionsFromSerializedDefinitions:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)build;
- (id)initWithTitle:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (void)_copyPropertiesToDefinition:(id)arg1;

@end
