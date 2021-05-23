/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class ISURLOperation, NSString, NSURL, NSURLSessionDataTask, NSUUID;

@interface IKLoadRecord : NSObject

{
    _Bool _loadCompleted;
    NSURL *_URL;
    ISURLOperation *_opertaion;
    NSString *_scriptStr;
    NSUUID *_requestID;
    NSURLSessionDataTask *_dataTask;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) ISURLOperation *opertaion;
@property (nonatomic) _Bool loadCompleted;
@property (retain, nonatomic) NSString *scriptStr;
@property (retain, nonatomic) NSUUID *requestID;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;

@end
