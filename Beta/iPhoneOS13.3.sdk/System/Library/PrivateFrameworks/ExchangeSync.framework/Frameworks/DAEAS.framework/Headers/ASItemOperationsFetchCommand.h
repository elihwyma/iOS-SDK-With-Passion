/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ASItemOperationsFetchCommand : NSObject

{
    NSString *_collectionID;
    NSString *_serverID;
    NSString *_longID;
}

- (id)serverID;
- (id)longID;
- (id)collectionID;
- (id)initWithCollectionID:(id)arg1 withServerID:(id)arg2 withLongID:(id)arg3;

@end
