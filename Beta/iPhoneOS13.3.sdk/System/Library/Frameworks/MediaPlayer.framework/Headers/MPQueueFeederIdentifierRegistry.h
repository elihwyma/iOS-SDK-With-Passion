/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSMapTable, NSMutableArray;

@interface MPQueueFeederIdentifierRegistry : NSObject <Swift>

{
    NSMutableArray *_identifiers;
    NSMutableArray *_identifierSets;
    NSMapTable *_index;
}

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *identifierSets;
@property (retain, nonatomic) NSMapTable *index;
@property (nonatomic, readonly) long long count;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (void)replaceItemAndIdentifierSet:(id)arg1 atIndex:(long long)arg2;
- (void)applyChanges:(id)arg1 identifierSetLookupBlock:(CDUnknownBlockType)arg2;
- (long long)indexForItem:(id)arg1;
- (id)identifierSetAtIndex:(long long)arg1;
- (id)identifierSetForItem:(id)arg1;
- (id)itemForIdentifierSet:(id)arg1;

@end
