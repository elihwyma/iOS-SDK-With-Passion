/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface IKAppDataSet : NSObject

{
    NSArray *_itemIDs;
    NSArray *_items;
    NSDictionary *_usedPrototypesByIdentifier;
    NSDictionary *_indexTitles;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (copy, nonatomic, readonly) NSDictionary *usedPrototypesByIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *indexTitles;
@property (copy, nonatomic, readonly) NSArray *itemIDs;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 indexTitles:(id)arg3;

@end
