/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSSet, TSDDrawableInfo;

@protocol TSDContainerInfo;

@protocol TSDCanvasSelection <Swift>

@property (nonatomic, readonly) NSSet *infos;
@property (nonatomic, readonly) unsigned long long infoCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) TSDDrawableInfo<TSDContainerInfo> *container;
@property (nonatomic, readonly) NSSet *unlockedInfos;
@property (nonatomic, readonly) unsigned long long unlockedInfoCount;

+ (unsigned short)emptySelection;

- (unsigned short)containsKindOfClass: /* Error: Ran out of types for this method. */;
- (unsigned short)containsUnlockedKindOfClass: /* Error: Ran out of types for this method. */;
- (unsigned short)infosOfClass: /* Error: Ran out of types for this method. */;
- (unsigned short)copyIncludingInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)copyExcludingInfo: /* Error: Ran out of types for this method. */;

@end
