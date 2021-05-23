/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class IDSOpportunisticOptions, NSData, NSMutableDictionary, NSString;

@interface IDSOpportunisticData : NSObject <Swift>

{
    NSData *_data;
    NSString *_identifier;
    NSString *_serviceName;
    NSString *_accountUniqueID;
    IDSOpportunisticOptions *_options;
    NSMutableDictionary *_sendCount;
}

@property (retain, nonatomic) NSMutableDictionary *sendCount;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountUniqueID;
@property (retain, nonatomic) IDSOpportunisticOptions *options;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5 sendCount:(id)arg6;
- (_Bool)isInvalid;
- (id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5;
- (void)markInvalid;
- (_Bool)shouldSendToDestination:(id)arg1;
- (void)incrementSendCountForDestination:(id)arg1;
- (long long)sendCountForURI:(id)arg1;

@end
