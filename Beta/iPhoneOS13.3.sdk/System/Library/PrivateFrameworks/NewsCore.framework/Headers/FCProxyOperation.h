/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@interface FCProxyOperation : FCOperation

{
    FCOperation *_underlyingOperation;
}

@property (retain, nonatomic) FCOperation *underlyingOperation;

+ (void)initialize;
+ (id)proxyForOperation:(id)arg1;

- (void)setQualityOfService:(long long)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)performOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)operationDidFinishWithError:(id)arg1;
- (void)_revisitRelativePriority;
- (void)_revisitQualityOfService;

@end
