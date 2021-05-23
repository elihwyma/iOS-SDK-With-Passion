/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NMSMessageCenter, NSDictionary, NSSet, NSString, NSURL;

@interface NMSOutgoingFileTransfer : NSObject

{
    NSSet *targetDeviceIDs;
    NSURL *_fileURL;
    NSDictionary *_metadata;
    id _pbHeaderInfo;
    NSString *_idsIdentifier;
    unsigned long long _priority;
    double _sendTimeout;
    NSDictionary *_persistentUserInfo;
    NSDictionary *_extraIDSOptions;
    NMSMessageCenter *_messageCenter;
}

@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) id pbHeaderInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (retain, nonatomic) NSDictionary *extraIDSOptions;
@property (copy, nonatomic) NSSet *targetDeviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)CPObfuscatedDescriptionObject;

@end
