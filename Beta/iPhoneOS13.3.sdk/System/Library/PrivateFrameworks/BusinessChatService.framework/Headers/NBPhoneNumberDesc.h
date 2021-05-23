/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface NBPhoneNumberDesc : NSObject

{
    NSString *_nationalNumberPattern;
    NSString *_possibleNumberPattern;
    NSArray *_possibleLength;
    NSArray *_possibleLengthLocalOnly;
    NSString *_exampleNumber;
    NSData *_nationalNumberMatcherData;
    NSData *_possibleNumberMatcherData;
}

@property (nonatomic, readonly) NSString *nationalNumberPattern;
@property (nonatomic, readonly) NSString *possibleNumberPattern;
@property (nonatomic, readonly) NSArray *possibleLength;
@property (nonatomic, readonly) NSArray *possibleLengthLocalOnly;
@property (nonatomic, readonly) NSString *exampleNumber;
@property (nonatomic, readonly) NSData *nationalNumberMatcherData;
@property (nonatomic, readonly) NSData *possibleNumberMatcherData;

- (id)description;
- (id)initWithEntry:(id)arg1;

@end
