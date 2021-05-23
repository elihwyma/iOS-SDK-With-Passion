/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKContent.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, PKImage, PKPassPersonalization;

@interface PKPassContent : PKContent <Swift>

{
    long long _transitType;
    PKImage *_footerImage;
    NSString *_logoText;
    NSArray *_frontFieldBuckets;
    NSArray *_backFieldBuckets;
    NSArray *_balanceFields;
    PKPassPersonalization *_personalization;
    NSDictionary *_semantics;
    NSDictionary *_allSemantics;
    NSString *_businessChatIdentifier;
}

@property (nonatomic) long long transitType;
@property (retain, nonatomic) PKImage *footerImage;
@property (copy, nonatomic) NSString *logoText;
@property (copy, nonatomic) NSArray *frontFieldBuckets;
@property (copy, nonatomic) NSArray *backFieldBuckets;
@property (copy, nonatomic) NSArray *balanceFields;
@property (copy, nonatomic) PKPassPersonalization *personalization;
@property (copy, nonatomic) NSDictionary *semantics;
@property (copy, nonatomic) NSDictionary *allSemantics;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (nonatomic, readonly) NSArray *primaryFields;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end
