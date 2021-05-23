/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject

{
    NSHashTable *_itemManagers;
}

@property (retain, nonatomic) NSHashTable *itemManagers;

+ (id)sharedInstance;

- (id)init;
- (void)registerItemManager:(id)arg1;
- (id)_performStateDump;

@end
