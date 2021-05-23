/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDCloudStoreRecordsRequest.h>

@class NSSet;

@interface PDApplePayCloudStoreRecordsRequest : PDCloudStoreRecordsRequest

{
    NSSet *_passUniqueIdentifiers;
}

@property (retain, nonatomic) NSSet *passUniqueIdentifiers;

@end
