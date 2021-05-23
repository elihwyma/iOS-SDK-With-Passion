/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject <Swift>

{
    NSDictionary *_responseDictionary;
    NSMutableDictionary *_parsedTokenResults;
}

@property (copy, nonatomic, readonly) NSString *serverInstance;
@property (copy, nonatomic, readonly) NSDictionary *tokenResults;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)tokenResultForAccountDSID:(id)arg1;

@end
