/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAAccountClassNames : NSObject

{
    NSString *_accountClassName;
    NSString *_clientAccountClassName;
    NSString *_daemonAccountClassName;
    NSString *_agentClassName;
}

@property (retain, nonatomic) NSString *accountClassName;
@property (retain, nonatomic) NSString *clientAccountClassName;
@property (retain, nonatomic) NSString *daemonAccountClassName;
@property (retain, nonatomic) NSString *agentClassName;

- (id)description;

@end
