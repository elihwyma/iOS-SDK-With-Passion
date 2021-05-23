/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject

{
    NSUUID *_UUID;
    CDUnknownBlockType _updateBlock;
}

@property (retain) NSUUID *UUID;
@property (copy) CDUnknownBlockType updateBlock;

- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end
