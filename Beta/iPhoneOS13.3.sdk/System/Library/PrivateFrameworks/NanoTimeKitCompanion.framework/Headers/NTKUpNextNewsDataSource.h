/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <RelevanceEngine/REElementDataSource.h>

@class NTKUpNextElementDataSource;

@interface NTKUpNextNewsDataSource : REElementDataSource

{
    NTKUpNextElementDataSource *_newsDataSourceProxy;
}

@property (retain, nonatomic) NTKUpNextElementDataSource *newsDataSourceProxy;

+ (id)bundleIdentifier;
+ (_Bool)wantsReloadForSignificantTimeChange;
+ (unsigned long long)elementContentMode;
+ (Class)nanoNewsDataSourceClass;

- (id)init;
- (void)setDelegate:(id)arg1;
- (void)pause;
- (void)resume;
- (void)setState:(unsigned long long)arg1;
- (void)setRunning:(_Bool)arg1;
- (id)supportedSections;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getElementsInSection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setAllowsLocationUse:(_Bool)arg1;

@end
