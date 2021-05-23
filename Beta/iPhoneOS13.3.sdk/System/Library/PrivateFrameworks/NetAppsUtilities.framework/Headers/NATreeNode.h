/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

#import <NetAppsUtilities/Swift-Protocol.h>

@class NSEnumerator, NSMutableSet, NSSet, NSString;

@interface NATreeNode : NSObject <Swift>

{
    id _representedObject;
    NSMutableSet *_internalChildNodes;
}

@property (copy, nonatomic) NSMutableSet *internalChildNodes;
@property (retain, nonatomic) id representedObject;
@property (copy, nonatomic, readonly) NSSet *childNodes;
@property (nonatomic, readonly) NSEnumerator *shallowRepresentedObjectEnumerator;
@property (nonatomic, readonly) NSEnumerator *shallowNodeEnumerator;
@property (nonatomic, readonly) NSEnumerator *deepNodeEnumerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithRepresentedObject:(id)arg1 childNodes:(id)arg2;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)childrenSortedByComparator:(CDUnknownBlockType)arg1;
- (id)childAtIndexPath:(id)arg1 withChildrenSortedByComparator:(CDUnknownBlockType)arg2;
- (id)initWithRepresentedObject:(id)arg1;

@end
