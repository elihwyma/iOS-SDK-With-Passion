/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SSVRedeemCodeMetadata : NSObject

{
    NSDictionary *_dictionary;
    NSString *_inputCode;
}

@property (nonatomic, readonly) _Bool allowsAutoSubmission;
@property (nonatomic, readonly) NSDictionary *redeemCodeDictionary;
@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *codeType;
@property (copy, nonatomic) NSString *inputCode;
@property (nonatomic, readonly) NSArray *items;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRedeemCodeDictionary:(id)arg1;

@end
