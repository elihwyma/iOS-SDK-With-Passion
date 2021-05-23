/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface PUTilingDataSource : NSObject

{
    NSString *_identifier;
    NSHashTable *__changeObservers;
}

@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (retain, nonatomic) NSString *identifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
