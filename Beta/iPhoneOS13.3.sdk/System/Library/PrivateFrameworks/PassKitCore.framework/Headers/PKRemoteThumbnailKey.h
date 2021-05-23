/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface PKRemoteThumbnailKey : NSObject

{
    NSString *_requestIdentifier;
    NSDictionary *_requestDictionary;
}

@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSDictionary *requestDictionary;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToRemoteThumbnailKey:(id)arg1;

@end
