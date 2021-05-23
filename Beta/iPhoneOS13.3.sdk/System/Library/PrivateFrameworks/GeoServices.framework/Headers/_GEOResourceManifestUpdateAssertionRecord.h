/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestUpdateAssertionRecord : NSObject

{
    NSString *_process;
    NSString *_reason;
    double _creationTimestamp;
}

@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) double creationTimestamp;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;

@end
