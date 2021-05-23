/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSString;

@interface CKAssetDownloadPreauthorization : NSObject

{
    NSString *_responseUUID;
    NSDictionary *_contentResponseHeaders;
    NSData *_contentResponseBody;
}

@property (retain, nonatomic) NSString *responseUUID;
@property (retain, nonatomic) NSDictionary *contentResponseHeaders;
@property (retain, nonatomic) NSData *contentResponseBody;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3;

@end
