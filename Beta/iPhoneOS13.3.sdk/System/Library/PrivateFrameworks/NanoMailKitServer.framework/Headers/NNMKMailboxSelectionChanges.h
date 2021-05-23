/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NNMKMailboxSelectionChanges : NSObject

{
    NSArray *_mailboxesToUpdate;
    NSArray *_mailboxesToReSync;
    NSArray *_mailboxesToDisableSync;
}

@property (retain, nonatomic) NSArray *mailboxesToUpdate;
@property (retain, nonatomic) NSArray *mailboxesToReSync;
@property (retain, nonatomic) NSArray *mailboxesToDisableSync;

@end
