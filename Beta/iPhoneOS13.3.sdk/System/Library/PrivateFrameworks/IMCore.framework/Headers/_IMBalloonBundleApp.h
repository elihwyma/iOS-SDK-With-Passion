/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMBalloonApp.h>

@interface _IMBalloonBundleApp : IMBalloonApp

{
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void)setDataSourceClass:(Class)arg1;
- (Class)dataSourceClass;
- (Class)bubbleClass;
- (Class)browserClass;
- (void)setBubbleClass:(Class)arg1;
- (void)setBrowserClass:(Class)arg1;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;
- (void)_loadBundle;
- (void)_loadAppBundle;

@end
