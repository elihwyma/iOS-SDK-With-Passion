/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject

{
    NSMutableSet *_clients;
    NSXPCConnection *_searchHelperConnection;
}

@property (retain, nonatomic) NSXPCConnection *searchHelperConnection;

+ (id)sharedManager;

- (id)init;
- (void)removeClient:(id)arg1;
- (id)searchHelperConnectionRequestedByClient:(id)arg1;

@end
