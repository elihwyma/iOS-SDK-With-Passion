/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface SKUITemplateLoader : NSObject

{
    SKUITemplateLoader *_retainSelf;
    NSArray *_URLs;
    CDUnknownBlockType _completionBlock;
    NSOperationQueue *_operationQueue;
    NSRegularExpression *_templateParsingRegularExpression;
    NSMutableArray *_errors;
    NSMutableDictionary *_templateStrings;
    long long _pendingOperationCount;
}

@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) NSRegularExpression *templateParsingRegularExpression;
@property (nonatomic, readonly) NSMutableArray *errors;
@property (nonatomic, readonly) NSMutableDictionary *templateStrings;
@property (nonatomic) long long pendingOperationCount;
@property (copy, nonatomic, readonly) NSArray *URLs;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;

- (void)load;
- (id)initWithURLs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_operation:(id)arg1 didFailWithError:(id)arg2;
- (void)_operation:(id)arg1 didCompleteWithOutput:(id)arg2;
- (void)_operationDidFinish:(id)arg1;
- (id)_operationWithURL:(id)arg1;

@end
