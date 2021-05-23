/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HFControlPanelItemSingleControlRule : NSObject

{
    CDUnknownBlockType _filter;
    CDUnknownBlockType _displayResultsGenerator;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType filter;
@property (copy, nonatomic, readonly) CDUnknownBlockType displayResultsGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)controlPanelItemForControlItems:(id)arg1;
- (id)initWithFilter:(CDUnknownBlockType)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;

@end
