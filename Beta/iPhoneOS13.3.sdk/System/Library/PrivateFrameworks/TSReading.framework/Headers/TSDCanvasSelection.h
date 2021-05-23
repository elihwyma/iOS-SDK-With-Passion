/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKSelection.h>

#import <TSReading/Swift-Protocol.h>

@class NSSet, NSString, TSDDrawableInfo;

@protocol TSDContainerInfo;

@interface TSDCanvasSelection : TSKSelection <Swift>

{
    NSSet *mInfos;
    TSDDrawableInfo<TSDContainerInfo> *mContainer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *infos;
@property (nonatomic, readonly) unsigned long long infoCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) TSDDrawableInfo<TSDContainerInfo> *container;
@property (nonatomic, readonly) NSSet *unlockedInfos;
@property (nonatomic, readonly) unsigned long long unlockedInfoCount;

+ (id)emptySelection;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)containsKindOfClass:(Class)arg1;
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;
- (id)infosOfClass:(Class)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;
- (id)initWithInfos:(id)arg1;

@end
