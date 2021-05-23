/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

#import <BusinessChat/Swift-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface BCError : NSObject <Swift>

{
    NSNumber *_code;
    NSString *_domain;
    NSString *_message;
}

@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *message;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCode:(id)arg1 domain:(id)arg2 message:(id)arg3;

@end
