/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDictionary, NSString, TBTileFetchRequestDescriptor;

@interface TBTileFetchRequest : NSObject <Swift>

{
    _Bool _cacheable;
    unsigned long long _sourcePolicy;
    NSDictionary *userInfo;
    CDUnknownBlockType resultsHandler;
    CDUnknownBlockType preferLocalHandler;
    TBTileFetchRequestDescriptor *_descriptor;
}

@property (retain, nonatomic) TBTileFetchRequestDescriptor *descriptor;
@property (nonatomic) _Bool cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long sourcePolicy;
@property (copy, nonatomic) CDUnknownBlockType resultsHandler;
@property (copy, nonatomic) CDUnknownBlockType preferLocalHandler;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)fetchRequestWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(_Bool)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)handleResponse:(id)arg1;
- (id)initWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(_Bool)arg3;
- (void)handlePreferLocalResponse:(id)arg1;
- (_Bool)doesLocalResultsSatisfyRequest:(id)arg1;

@end
