/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NFObjectReuseManager : NSObject

{
    CDUnknownBlockType _reuseFactory;
    NSMutableDictionary *_inuseObjects;
    NSMutableDictionary *_reuseableObjects;
}

@property (copy, nonatomic) CDUnknownBlockType reuseFactory;
@property (copy, nonatomic) NSMutableDictionary *inuseObjects;
@property (copy, nonatomic) NSMutableDictionary *reuseableObjects;

- (id)initWithObjectConstructor:(CDUnknownBlockType)arg1;
- (id)dequeueObjectForIdentifier:(id)arg1;
- (void)prepareObjectForReuse:(id)arg1;
- (void)purgeObjectForIdentifier:(id)arg1;
- (_Bool)isInUse:(id)arg1;
- (id)inUseObjectForIdentifier:(id)arg1;

@end
