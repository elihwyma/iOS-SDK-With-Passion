/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BDSICloudIdentityToken : NSObject

{
    NSString *_token;
}

@property (copy, nonatomic) NSString *token;

+ (id)tokenForCurrentIdentityIfCloudKitEnabled;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithToken:(id)arg1;
- (id)initWithCurrentIdentity;
- (id)initFromArchive:(id)arg1;
- (id)_hashFor:(id)arg1;

@end
