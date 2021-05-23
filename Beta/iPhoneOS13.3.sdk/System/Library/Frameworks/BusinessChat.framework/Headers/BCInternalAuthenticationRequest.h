/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface BCInternalAuthenticationRequest : NSObject

{
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_responseEncryptionKey;
    NSArray *_retrieve;
    NSDictionary *_labels;
}

@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *responseEncryptionKey;
@property (retain, nonatomic) NSArray *retrieve;
@property (retain, nonatomic) NSDictionary *labels;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end
