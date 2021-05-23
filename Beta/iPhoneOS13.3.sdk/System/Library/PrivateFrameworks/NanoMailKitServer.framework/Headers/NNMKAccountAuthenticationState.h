/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NNMKAccountAuthenticationState : NSObject

{
    NSString *_accountId;
    unsigned long long _state;
    NSString *_displayName;
    NSString *_subsectionId;
}

@property (copy, nonatomic) NSString *accountId;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *subsectionId;

@end
