/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentTypeMatching;

@protocol SXComponentViewPostProcessorManager;

@interface SXComponentViewEngine : NSObject

{
    SXComponentTypeMatching *_factoryMatching;
    id <SXComponentViewPostProcessorManager> _postProcessorManager;
}

@property (nonatomic, readonly) SXComponentTypeMatching *factoryMatching;
@property (nonatomic, readonly) id <SXComponentViewPostProcessorManager> postProcessorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)componentViewForComponent:(id)arg1;
- (void)addFactory:(id)arg1;
- (void)removeFactory:(id)arg1;
- (id)initWithPostProcessorManager:(id)arg1;

@end
