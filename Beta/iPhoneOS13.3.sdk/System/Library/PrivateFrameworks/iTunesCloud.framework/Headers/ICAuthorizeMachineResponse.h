/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSData, NSDictionary;

@interface ICAuthorizeMachineResponse : NSObject

{
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic, readonly) NSData *keybagData;
@property (copy, nonatomic, readonly) NSData *tokenData;

- (id)initWithResponseDictionary:(id)arg1;

@end
