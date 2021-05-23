/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSData, NSString, NSURL, NSURLRequest, NSUUID;

@protocol __NSURLSessionTaskGroupForConfiguration;

@interface __NSCFTaskForClass : NSObject

{
    Class cl;
    NSURLRequest *request;
    NSUUID *uniqueIdentifier;
    NSURL *uploadFile;
    NSData *bodyData;
    CDUnknownBlockType completion;
    NSString *downloadFilePath;
    NSData *resumeData;
    CDUnknownBlockType downloadCompletion;
    id <__NSURLSessionTaskGroupForConfiguration> _group;
}

@property (retain, readonly) id <__NSURLSessionTaskGroupForConfiguration> group;
@property (retain) Class cl;
@property (retain) NSURLRequest *request;
@property (retain) NSUUID *uniqueIdentifier;
@property (retain) NSURL *uploadFile;
@property (retain) NSData *bodyData;
@property (copy) CDUnknownBlockType completion;
@property (retain) NSString *downloadFilePath;
@property (retain) NSData *resumeData;
@property (copy) CDUnknownBlockType downloadCompletion;

- (void)dealloc;
- (id)initWithGroup:(id)arg1;

@end
