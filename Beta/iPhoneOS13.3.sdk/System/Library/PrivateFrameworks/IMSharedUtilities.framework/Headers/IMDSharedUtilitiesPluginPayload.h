/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, NSURL;

@interface IMDSharedUtilitiesPluginPayload : NSObject

{
    _Bool _isFromMe;
    NSData *_data;
    NSString *_messageGUID;
    id _dataDetectedResult;
    NSURL *_url;
    id _datasource;
    NSString *_pluginBundleID;
    NSArray *_consumedSessionPayloads;
    NSArray *_attachments;
}

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) id dataDetectedResult;
@property (retain, nonatomic) NSURL *url;
@property (weak, nonatomic) id datasource;
@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) _Bool isFromMe;

- (void)dealloc;

@end
