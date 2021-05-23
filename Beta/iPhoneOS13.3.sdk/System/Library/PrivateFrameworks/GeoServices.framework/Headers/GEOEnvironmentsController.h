/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@protocol GEOEnvironmentsControllerDelegate;

@interface GEOEnvironmentsController : NSObject

{
    NSArray *_defaultEnvironmentInfos;
    NSArray *_environmentInfos;
    NSArray *_customEnvironmentInfos;
    _Bool _enableCustomEnvironments;
    id <GEOEnvironmentsControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <GEOEnvironmentsControllerDelegate> delegate;

- (void)dealloc;
- (void)reloadEnvironments;
- (void)reloadEnvironments:(CDUnknownBlockType)arg1;
- (id)initEnablingCustomEnvironments:(_Bool)arg1;
- (id)environmentInfosForSection:(long long)arg1;
- (void)addCustomEnvironment:(id)arg1;
- (void)removeCustomEnvironment:(id)arg1;
- (id)activeEnvironment;

@end
