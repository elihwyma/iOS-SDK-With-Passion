/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol PSIGroupCacheDelegate;

@interface PSIGroupCache : NSObject

{
    NSMutableSet *_groups;
    id <PSIGroupCacheDelegate> _delegate;
    unsigned long long _numberOfGroupsChecked;
    unsigned long long _numberOfGroupsQueried;
}

@property (readonly) unsigned long long numberOfGroupsChecked;
@property (readonly) unsigned long long numberOfGroupsQueried;

- (id)initWithDelegate:(id)arg1;
- (unsigned long long)idOfGroupWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out _Bool *)arg5;

@end
