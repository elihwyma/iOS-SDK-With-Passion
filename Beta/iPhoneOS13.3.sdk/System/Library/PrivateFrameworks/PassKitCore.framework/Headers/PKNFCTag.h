/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NFTag, NSData;

@interface PKNFCTag : NSObject

{
    NFTag *_underlyingTag;
    unsigned long long _technology;
    NSData *_tagIdentifier;
    NSData *_manufacturerIdentifier;
    NSData *_manufacturerParameter;
    NSData *_systemCode;
    NSData *_appData;
    NSData *_UID;
}

@property (nonatomic) unsigned long long technology;
@property (copy, nonatomic) NSData *tagIdentifier;
@property (copy, nonatomic) NSData *manufacturerIdentifier;
@property (copy, nonatomic) NSData *manufacturerParameter;
@property (copy, nonatomic) NSData *systemCode;
@property (copy, nonatomic) NSData *appData;
@property (copy, nonatomic) NSData *UID;

- (id)initWithNFTag:(id)arg1;

@end
