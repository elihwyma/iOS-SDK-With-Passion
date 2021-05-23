/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class IDSMessageContext, NMSMessageCenter, NSDictionary, NSString, NSURL;

@interface NMSIncomingFileTransfer : NSObject

{
    NSString *sourceDeviceID;
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSURL *_fileURL;
    NSDictionary *_metadata;
    id _pbHeaderInfo;
    unsigned long long _priority;
    IDSMessageContext *_idsContext;
}

@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) id pbHeaderInfo;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) NSString *sourceDeviceID;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)CPObfuscatedDescriptionObject;

@end
