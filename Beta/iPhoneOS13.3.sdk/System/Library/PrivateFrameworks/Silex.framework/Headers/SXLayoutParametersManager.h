/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SXLayoutParametersManager : NSObject

{
    NSMutableDictionary *_durations;
}

@property (nonatomic, readonly) NSMutableDictionary *durations;

- (id)init;
- (void)layoutFinishedForTask:(id)arg1 result:(id)arg2;
- (id)layoutParametersForTask:(id)arg1 previousLayoutOptions:(id)arg2;

@end
