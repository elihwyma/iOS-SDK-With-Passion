/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@interface CRKInternetDateProvider : NSObject <Swift>

{
    NSURLSession *_session;
    NSMutableDictionary *_completionHandlerTable;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableDictionary *completionHandlerTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)fetchInternetDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)storeCompletionHandler:(CDUnknownBlockType)arg1 forTask:(id)arg2;
- (void)callAndRemoveCompletionHandlerWithDate:(id)arg1 error:(id)arg2 task:(id)arg3;
- (void)internetDateRequestDidReceiveTask:(id)arg1;

@end
