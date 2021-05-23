/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSNumber, NSString;

@interface NFValueAddedServiceTransaction : NSObject

{
    unsigned int _result;
    NSData *_merchantId;
    NSString *_signupUrl;
    NSNumber *_terminalAppVersion;
    NSNumber *_terminalMode;
    NSNumber *_didSucceed;
    NSData *_passData;
    NSData *_token;
    NSError *_error;
    NSNumber *_filter;
    NSNumber *_filterType;
}

@property (nonatomic, readonly) NSData *merchantId;
@property (nonatomic, readonly) NSString *signupUrl;
@property (nonatomic, readonly) NSNumber *terminalAppVersion;
@property (nonatomic, readonly) NSNumber *terminalMode;
@property (nonatomic, readonly) NSNumber *didSucceed;
@property (nonatomic, readonly) NSData *passData;
@property (nonatomic, readonly) NSData *token;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSNumber *filter;
@property (nonatomic, readonly) NSNumber *filterType;
@property (nonatomic, readonly) unsigned int result;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)asDictionary;

@end
