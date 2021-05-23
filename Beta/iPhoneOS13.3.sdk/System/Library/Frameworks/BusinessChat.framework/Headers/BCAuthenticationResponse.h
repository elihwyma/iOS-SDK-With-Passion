/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class BCError, NSArray, NSDictionary, NSString;

@interface BCAuthenticationResponse : NSObject

{
    NSString *_status;
    NSString *_token;
    NSArray *_errors;
}

@property (nonatomic) NSString *status;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSArray *errors;
@property (nonatomic, readonly) BCError *error;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

- (id)initWithDictionary:(id)arg1;
- (id)initWithToken:(id)arg1 error:(id)arg2;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end
