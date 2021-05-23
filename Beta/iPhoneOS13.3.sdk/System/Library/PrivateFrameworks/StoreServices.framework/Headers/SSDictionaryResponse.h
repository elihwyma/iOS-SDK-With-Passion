/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSNumber *failureType;
@property (nonatomic, readonly) NSArray *pingURLs;
@property (nonatomic, readonly, getter=isSupportedProtocolVersion) _Bool supportedProtocolVersion;
@property (nonatomic, readonly) NSURL *versionMismatchURL;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)_valueForProtocolKey:(id)arg1;
- (id)_copyAccount;
- (id)actionsWithActionType:(id)arg1;

@end
