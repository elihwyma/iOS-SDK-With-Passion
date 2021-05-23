/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFLANHandoffContext : NSObject

{
    unsigned short _port;
    NSString *_host;
}

@property (copy, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (void)dealloc;

@end
