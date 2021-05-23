/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/BSServiceInterface.h>

@class BSObjCProtocol, NSString;

@interface BSMutableServiceInterface : BSServiceInterface

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long clientMessagingExpectation;
@property (copy, nonatomic) BSObjCProtocol *server;
@property (copy, nonatomic) BSObjCProtocol *client;

+ (id)interfaceWithIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
