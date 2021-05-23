/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSData, NSDate, NSDictionary;

@interface ICSuzeLeaseResponse : NSObject

{
    NSDate *_requestDate;
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic, readonly) NSData *clientData;
@property (copy, nonatomic, readonly) NSDate *leaseExpirationDate;

- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2;

@end
