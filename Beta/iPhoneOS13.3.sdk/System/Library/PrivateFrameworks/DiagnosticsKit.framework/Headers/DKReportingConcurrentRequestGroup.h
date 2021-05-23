/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface DKReportingConcurrentRequestGroup : NSObject

{
    struct NSMutableSet *_requests;
    NSMutableDictionary *_requestLookupByGenerator;
    struct NSMutableSet *_resources;
}

@property (retain, nonatomic) NSMutableSet *resources;
@property (retain, nonatomic) NSMutableSet *requests;
@property (retain, nonatomic) NSMutableDictionary *requestLookupByGenerator;

- (id)init;
- (_Bool)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2;

@end
