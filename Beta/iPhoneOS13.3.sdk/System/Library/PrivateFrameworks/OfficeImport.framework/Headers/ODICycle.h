/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODICycle : NSObject

+ (void)mapWithState:(id)arg1;
+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;
+ (unsigned long long)nodeCountWithState:(id)arg1;
+ (_Bool)map1NodeWithState:(id)arg1;
+ (_Bool)map2NodeWithState:(id)arg1;
+ (struct CGRect)mapGSpaceWithState:(id)arg1;
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (struct CGSize)nodeSizeWithState:(id)arg1;
+ (struct CGRect)boundingBoxWithIsTight:(_Bool)arg1 state:(id)arg2;
+ (struct CGRect)nodeBoundsWithIndex:(unsigned int)arg1 state:(id)arg2;

@end
