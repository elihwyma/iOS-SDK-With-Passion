/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroupSet : NSObject

{
    NSMutableDictionary *_itemsByGroupTuple;
}

@property (retain, nonatomic) NSMutableDictionary *itemsByGroupTuple;
@property (nonatomic, readonly) NSError *error;

- (id)init;
- (id)description;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)CKPropertiesDescription;
- (id)allItemGroups;

@end
