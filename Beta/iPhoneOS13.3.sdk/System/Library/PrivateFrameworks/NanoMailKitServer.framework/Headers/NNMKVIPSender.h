/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface NNMKVIPSender : NSObject

{
    NSString *_name;
    NSString *_displayName;
    NSSet *_emailAddresses;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSSet *emailAddresses;

@end
