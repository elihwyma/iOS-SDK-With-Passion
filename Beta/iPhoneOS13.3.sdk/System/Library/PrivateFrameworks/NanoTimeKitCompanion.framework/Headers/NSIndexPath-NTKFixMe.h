/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (NTKFixMe)

@property (nonatomic, readonly) unsigned long long element;
@property (nonatomic, readonly) unsigned long long upNextSection;

+ (id)indexPathWithElement:(unsigned long long)arg1 inUpNextSection:(unsigned long long)arg2;

@end
