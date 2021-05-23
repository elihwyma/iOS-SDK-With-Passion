/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface BLPurchaseRequest : NSObject

{
    _Bool _audiobook;
    _Bool _preOrder;
    _Bool _restore;
    NSString *_buyParameters;
    NSNumber *_storeIdentifier;
    NSURL *_permlink;
    NSString *_permlinkTitle;
    NSNumber *_accountIdentifier;
    NSDictionary *_analyticsInfo;
}

@property (copy, nonatomic) NSString *buyParameters;
@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (retain, nonatomic) NSURL *permlink;
@property (copy, nonatomic) NSString *permlinkTitle;
@property (nonatomic, getter=isPreOrder) _Bool preOrder;
@property (nonatomic, getter=isAudiobook) _Bool audiobook;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSDictionary *analyticsInfo;
@property (nonatomic, getter=isRestore) _Bool restore;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithBuyParameters:(id)arg1 storeIdentifier:(id)arg2;
+ (id)requestWithPermlink:(id)arg1 title:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
