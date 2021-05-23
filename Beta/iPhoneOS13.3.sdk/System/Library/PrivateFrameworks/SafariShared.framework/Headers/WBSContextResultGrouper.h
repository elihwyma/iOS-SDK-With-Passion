/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSContextResultGrouper : NSObject

{
    unsigned long long _minimumNumberOfItemsRequiredInGroup;
}

@property (nonatomic) unsigned long long minimumNumberOfItemsRequiredInGroup;

- (id)init;
- (struct NSMapTable *)groupItems:(id)arg1;

@end
