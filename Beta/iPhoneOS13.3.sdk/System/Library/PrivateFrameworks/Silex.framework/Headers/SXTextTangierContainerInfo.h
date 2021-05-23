/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSDContainerInfo.h>

@class NSSet, NSString, SXTextTangierStorage;

@protocol TSDRepDirectLayerHosting;

@interface SXTextTangierContainerInfo : TSDContainerInfo

{
    _Bool _isSelectable;
    _Bool _shouldHyphenate;
    SXTextTangierStorage *_storage;
    NSSet *_fixedExclusionPaths;
    id <TSDRepDirectLayerHosting> _directLayerHost;
}

@property (nonatomic, readonly) SXTextTangierStorage *storage;
@property (retain, nonatomic) NSSet *fixedExclusionPaths;
@property (retain, nonatomic) NSSet *rangedExclusionPaths;
@property (nonatomic) _Bool isSelectable;
@property (nonatomic) _Bool shouldHyphenate;
@property (weak, nonatomic) id <TSDRepDirectLayerHosting> directLayerHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (Class)layoutClass;
- (Class)repClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5;

@end
