/*
 Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

#import <Foundation/NSObject.h>

@class CommunicationFilterItem;

__attribute__((visibility("hidden")))
@interface CommunicationFilterItemCache : NSObject

{
    CommunicationFilterItem *_filterItem;
    long long _isInList;
}

@property (nonatomic) long long isInList;

- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;
- (_Bool)matchesItem:(id)arg1;

@end
