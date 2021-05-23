/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface IDSMMCSDownloadAuth : NSObject <Swift>

{
    NSDictionary *_dictionaryRepresentation;
}

@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSString *authURL;
@property (nonatomic, readonly) NSString *ownerID;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSignature:(id)arg1 authURL:(id)arg2 ownerID:(id)arg3;

@end
