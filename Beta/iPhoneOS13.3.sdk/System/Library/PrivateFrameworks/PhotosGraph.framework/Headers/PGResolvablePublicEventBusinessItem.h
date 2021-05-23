/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGConsolidatedAddress, PGGraphPublicEventNode;

@interface PGResolvablePublicEventBusinessItem : NSObject

{
    PGGraphPublicEventNode *_publicEventNode;
    PGConsolidatedAddress *_consolidatedAddress;
    unsigned long long _businessItemMuid;
}

@property (nonatomic, readonly) PGGraphPublicEventNode *publicEventNode;
@property (nonatomic, readonly) PGConsolidatedAddress *consolidatedAddress;
@property (nonatomic, readonly) unsigned long long businessItemMuid;

- (id)initWithPublicEventNode:(id)arg1 consolidatedAddress:(id)arg2 businessItemMuid:(unsigned long long)arg3;

@end
