/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLSession;

@protocol SXEmbedDataProvider;

@interface SXEmbedService : NSObject

{
    id <SXEmbedDataProvider> _embedDataProvider;
    NSURLSession *_session;
}

@property (nonatomic, readonly) id <SXEmbedDataProvider> embedDataProvider;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDataProvider:(id)arg1;
- (id)embedConfigurationForType:(id)arg1;
- (void)fetchHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)additionalQueryParametersForConfiguration:(id)arg1;
- (id)addAdditionalQueryParameters:(id)arg1 toURL:(id)arg2;

@end
