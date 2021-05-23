/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SXActionActivityGroup : NSObject

{
    NSString *_title;
    NSMutableArray *_activities;
}

@property (retain, nonatomic) NSMutableArray *activities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *title;

- (id)initWithTitle:(id)arg1;
- (void)addActivity:(id)arg1;

@end
