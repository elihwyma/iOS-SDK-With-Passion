/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolStatusReport : RMModelPayloadBase

{
    NSArray *_requestItems;
}

@property (copy, nonatomic) NSArray *requestItems;

+ (id)loadData:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
+ (id)loadArray:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
+ (id)requestWithItems:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (id)serializeAsDataWithType:(short)arg1 error:(id *)arg2;
- (_Bool)loadItems:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializeItemsWithType:(short)arg1;

@end
