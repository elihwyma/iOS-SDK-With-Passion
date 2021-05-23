/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSURLProtocol.h>

@interface FCMockURLProtocol : NSURLProtocol

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)URLForData:(id)arg1 mimeType:(id)arg2;
+ (id)URLForError:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
