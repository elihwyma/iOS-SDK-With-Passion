/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DADataHandler : NSObject

{
    void *_container;
    NSString *_changeTrackingID;
}

@property (copy, nonatomic) NSString *changeTrackingID;
@property (nonatomic) void *container;

+ (id)newDataHandlerForDataclass:(long long)arg1 container:(void *)arg2 changeTrackingID:(id)arg3;

- (void)dealloc;
- (long long)dataclass;
- (id)initWithContainer:(void *)arg1 changeTrackingID:(id)arg2;
- (int)getIdFromLocalObject:(void *)arg1;
- (void *)copyLocalObjectFromId:(int)arg1;
- (_Bool)saveContainer;
- (id)copyOfAllLocalObjectsInContainer;
- (void)drainContainer;
- (_Bool)wipeServerIds;
- (void)drainSuperfluousChanges;
- (void)openDB;
- (_Bool)closeDBAndSave:(_Bool)arg1;
- (id)getDAObjectWithLocalItem:(void *)arg1 serverId:(id)arg2 account:(id)arg3;
- (id)getDAExceptionObjectWithLocalItem:(void *)arg1 originalEvent:(id)arg2 account:(id)arg3;

@end
