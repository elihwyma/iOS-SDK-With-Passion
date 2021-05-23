/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSError;

@protocol OS_xpc_object;

@interface GEOXPCReply : NSObject <Swift>

{
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    NSError *_error;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *replyDictionary;
@property (nonatomic, readonly) unsigned char flags;
@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)send;
- (id)initWithRequest:(id)arg1;

@end
