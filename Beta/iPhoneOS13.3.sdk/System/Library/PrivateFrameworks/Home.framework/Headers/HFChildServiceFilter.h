/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface HFChildServiceFilter : NSObject

{
    NSSet *_childServiceTypes;
}

@property (copy, nonatomic, readonly) NSSet *childServiceTypes;

- (id)initWithChildServiceTypes:(id)arg1;
- (id)filteredChildServicesForParentService:(id)arg1;

@end
