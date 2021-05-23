/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BCSCallToActionItem : NSObject

{
    _Bool _isDefault;
    NSString *_language;
    NSString *_subtitle;
    NSString *_title;
    NSString *_body;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) _Bool isDefault;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCallToAction:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 language:(id)arg3 body:(id)arg4 isDefault:(_Bool)arg5;

@end
