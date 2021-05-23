/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSPredicate;

@interface HMFHTTPRequestHandler

{
    NSPredicate *_methodPredicate;
    NSPredicate *_URLPredicate;
    CDUnknownBlockType _matchBlock;
    CDUnknownBlockType _requestBlock;
}

@property (copy, nonatomic, readonly) NSPredicate *methodPredicate;
@property (copy, nonatomic, readonly) NSPredicate *URLPredicate;
@property (copy, nonatomic, readonly) CDUnknownBlockType matchBlock;
@property (copy, nonatomic) CDUnknownBlockType requestBlock;

+ (_Bool)_isValidMethodPrediate:(id)arg1;
+ (_Bool)_isValidURLPredicate:(id)arg1;

- (id)init;
- (id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(CDUnknownBlockType)arg3;

@end
