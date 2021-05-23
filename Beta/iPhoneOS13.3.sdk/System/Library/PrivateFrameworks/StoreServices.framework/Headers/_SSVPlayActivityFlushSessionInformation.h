/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _SSVPlayActivityFlushSessionInformation : NSObject

{
    NSString *_endpointIdentifier;
    NSIndexSet *_revisionsIndexSet;
    NSString *_revisionVersionToken;
    unsigned long long _sessionToken;
}

@property (copy, nonatomic) NSString *endpointIdentifier;
@property (retain, nonatomic) NSIndexSet *revisionsIndexSet;
@property (copy, nonatomic) NSString *revisionVersionToken;
@property (nonatomic) unsigned long long sessionToken;

@end
