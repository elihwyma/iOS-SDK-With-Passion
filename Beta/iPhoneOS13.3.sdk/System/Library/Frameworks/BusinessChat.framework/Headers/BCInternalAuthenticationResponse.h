/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class BCError, NSArray, NSDictionary, NSString;

@interface BCInternalAuthenticationResponse : NSObject

{
    NSString *_status;
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_credentials;
    NSArray *_errors;
}

@property (nonatomic) NSString *status;
@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *credentials;
@property (retain, nonatomic) NSArray *errors;
@property (nonatomic, readonly) BCError *error;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)initWithBusinessIdentifier:(id)arg1 groupIdentifier:(id)arg2 credentials:(id)arg3 error:(id)arg4;
- (id)responseMessageFor:(id)arg1 message:(id)arg2;

@end
