/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface PRRequest : NSObject

{
    _Bool _requestedOnThisDevice;
    NSString *_requestID;
    NSString *_ask;
    NSDictionary *_requestInfo;
    unsigned long long _requestStatus;
    NSNumber *_requesterDSID;
    NSNumber *_responderDSID;
    NSString *_clientIdentifier;
    NSDate *_dateAddedToLocalCache;
    NSString *_statusDescription;
}

@property (copy) NSString *requestID;
@property (copy) NSString *ask;
@property (copy) NSDictionary *requestInfo;
@property unsigned long long requestStatus;
@property (copy) NSNumber *requesterDSID;
@property (copy) NSNumber *responderDSID;
@property (copy) NSString *clientIdentifier;
@property _Bool requestedOnThisDevice;
@property (copy) NSDate *dateAddedToLocalCache;
@property (readonly) NSString *statusDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)cacheRepresentation;
- (id)initWithAsk:(id)arg1 requestInfo:(id)arg2;

@end
