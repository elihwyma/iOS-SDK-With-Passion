/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL, TPSURLSessionItem;

@interface HLPRemoteDataController : NSObject

{
    _Bool _loading;
    _Bool _hasLoaded;
    NSURL *_URL;
    NSDictionary *_headerFields;
    TPSURLSessionItem *_URLSessionItem;
}

@property (retain, nonatomic) TPSURLSessionItem *URLSessionItem;
@property (nonatomic) _Bool loading;
@property (nonatomic) _Bool hasLoaded;
@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSDictionary *headerFields;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)cancel;
- (void)clearData;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1 formattedData:(id)arg2;

@end
