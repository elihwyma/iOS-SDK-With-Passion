/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol EDIndexableItem;

@interface EDSearchableIndexPendingItem : NSObject

{
    NSString *_identifier;
    NSMutableArray *_items;
    id <EDIndexableItem> _referenceItem;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id <EDIndexableItem> referenceItem;
@property (nonatomic, readonly) unsigned long long estimatedSizeInBytes;
@property (nonatomic, readonly) _Bool requiresPreprocessing;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithItem:(id)arg1;
- (void)addPendingItem:(id)arg1;

@end
