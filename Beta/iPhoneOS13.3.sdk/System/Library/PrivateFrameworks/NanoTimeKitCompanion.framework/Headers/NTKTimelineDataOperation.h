/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKCComplicationDataSource, CLKComplication;

@protocol CLKComplicationDataSource;

@interface NTKTimelineDataOperation : NSObject

{
    CLKCComplicationDataSource *_localDataSource;
    id <CLKComplicationDataSource> _remoteDataSource;
    CLKComplication *_remoteComplication;
    _Bool _started;
    _Bool _canceled;
}

@property (nonatomic, readonly) _Bool started;
@property (nonatomic, readonly) _Bool canceled;

+ (id)operationWithLocalDataSource:(id)arg1;
+ (id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2;

- (void)cancel;
- (void)start;
- (void)_start;
- (void)_cancel;
- (_Bool)_validateEntry:(id)arg1;
- (_Bool)_validateTemplate:(id)arg1;
- (id)_finalizedValidEntries:(id)arg1;

@end
