/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TILanguageModelAdaptationContext : NSObject

{
    _Bool _isOnline;
    NSString *_appContext;
    NSString *_recipientNameDigest;
    NSDictionary *_recipientContext;
}

@property (nonatomic, readonly) NSString *appContext;
@property (nonatomic, readonly) NSString *recipientNameDigest;
@property (nonatomic, readonly) NSDictionary *recipientContext;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *identifierForResponseKit;
@property (nonatomic) _Bool isOnline;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientIdentifier:(id)arg1 andRecipientRecord:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 andRecipientContactInfo:(id)arg2;

@end
