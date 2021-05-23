/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSArray, WFCoercionOptions, WFFileType;

@interface WFCoercionRequest : NSObject <Swift>

{
    CDUnknownBlockType _objectRepresentationResultHandler;
    CDUnknownBlockType _fileRepresentationResultHandler;
    CDUnknownBlockType _contentItemsCompletionHandler;
    CDUnknownBlockType _contentCollectionResultHandler;
    WFCoercionOptions *_options;
    long long _requestType;
    Class _objectClass;
    WFFileType *_fileType;
    NSArray *_contentItemClasses;
}

@property (nonatomic, readonly) CDUnknownBlockType contentItemsCompletionHandler;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly) CDUnknownBlockType objectRepresentationResultHandler;
@property (nonatomic, readonly) WFFileType *fileType;
@property (nonatomic, readonly) CDUnknownBlockType fileRepresentationResultHandler;
@property (nonatomic, readonly) NSArray *contentItemClasses;
@property (nonatomic, readonly) CDUnknownBlockType contentCollectionResultHandler;
@property (retain, nonatomic) WFCoercionOptions *options;

+ (id)requestForCoercingToContentClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)requestForCoercingToObjectClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)requestForCoercingToFileType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_requestForCoercingToContentClasses:(id)arg1 itemCompletionHandler:(CDUnknownBlockType)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)completeContentItemCoercionRequestWithResultItems:(id)arg1 originalItem:(id)arg2 error:(id)arg3;

@end
