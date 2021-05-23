/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SFRemoteTextSessionInfo : NSObject

{
    _Bool _secureTextEntry;
    NSString *_identifier;
    long long _keyboardType;
    NSString *_prompt;
    long long _returnKeyType;
    struct NSDictionary *_rtiPayload;
    NSString *_text;
    NSString *_title;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) long long returnKeyType;
@property (copy, nonatomic) NSDictionary *rtiPayload;
@property (nonatomic) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithRTIPayload:(id)arg1;

@end
