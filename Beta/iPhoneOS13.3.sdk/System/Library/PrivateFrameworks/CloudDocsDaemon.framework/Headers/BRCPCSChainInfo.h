/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCItemID, BRFieldCKInfo;

__attribute__((visibility("hidden")))
@interface BRCPCSChainInfo : NSObject

{
    BOOL _itemType;
    unsigned int _chainState;
    BRCItemID *_itemID;
    BRCItemID *_parentID;
    BRFieldCKInfo *_structuralCKInfo;
    BRFieldCKInfo *_contentCKInfo;
}

@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BRCItemID *parentID;
@property (nonatomic, readonly) BRFieldCKInfo *structuralCKInfo;
@property (nonatomic, readonly) BRFieldCKInfo *contentCKInfo;
@property (nonatomic, readonly) BOOL itemType;
@property (nonatomic, readonly) unsigned int chainState;

- (id)initWithItemID:(id)arg1 parentID:(id)arg2 structuralCKInfo:(id)arg3 contentCKInfo:(id)arg4 itemType:(BOOL)arg5 chainState:(unsigned int)arg6;

@end
