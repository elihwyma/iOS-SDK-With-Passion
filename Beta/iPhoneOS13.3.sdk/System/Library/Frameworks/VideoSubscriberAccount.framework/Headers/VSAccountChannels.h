/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface VSAccountChannels : NSObject

{
    NSString *_providerID;
    NSString *_adamID;
    NSSet *_channelIDs;
    NSDictionary *_providerInfo;
}

@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSSet *channelIDs;
@property (copy, nonatomic) NSDictionary *providerInfo;

+ (id)deserializationResultWithData:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializationResultWithFormat:(unsigned long long)arg1;
- (id)serializationResult;

@end
