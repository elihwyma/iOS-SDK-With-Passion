/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTemplate, NSString, NTKCompanionAppLibrary, NTKCompanionComplicationDataSource, NTKComplicationCollection;

@interface NTKCompanionRemoteComplicationDataSource : NTKComplicationDataSource

{
    CLKComplicationTemplate *_complicationTemplate;
    NTKComplicationCollection *_complicationCollection;
    NTKCompanionComplicationDataSource *_stocksDataSource;
    NTKCompanionAppLibrary *_appLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;

- (void)dealloc;
- (void)_invalidate;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)currentSwitcherTemplate;
- (void)_activeDeviceChanged;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollectionDidLoad:(id)arg1;
- (void)_loadCollection;
- (_Bool)_remoteIsCompanion;
- (id)_templateFromApp:(id)arg1;
- (void)_invalidateIfComplicationCorrespondsToApp:(id)arg1;
- (void)appLibrary:(id)arg1 didAddApp:(id)arg2;
- (void)appLibrary:(id)arg1 didUpdateApp:(id)arg2;

@end
