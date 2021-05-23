/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface MFRequestQueue : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_requestPairs;
}

@property (retain, nonatomic) NSMutableArray *requestPairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)signpostLog;

- (id)init;
- (_Bool)addRequest:(struct EFPair *)arg1;
- (unsigned long long)signpostID;
- (_Bool)addRequests:(id)arg1;
- (_Bool)processRequests:(id)arg1;
- (_Bool)_processRequests:(id)arg1;
- (_Bool)processRequest:(struct EFPair *)arg1;

@end
