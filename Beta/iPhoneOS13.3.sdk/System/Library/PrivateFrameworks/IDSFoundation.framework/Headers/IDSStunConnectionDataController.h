/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject

{
    NSMutableDictionary *_tokenToConnectionData;
    NSMutableDictionary *_tokenToDeliveryStatus;
}

+ (id)sharedInstance;

- (id)dataFromCandidates:(id)arg1 token:(id)arg2;
- (unsigned long long)deliveryStatus:(id)arg1;
- (void)setDeliveryStatus:(id)arg1 status:(unsigned long long)arg2;
- (id)candidatesFromData:(id)arg1 token:(id)arg2;
- (void)removeData:(id)arg1;

@end
