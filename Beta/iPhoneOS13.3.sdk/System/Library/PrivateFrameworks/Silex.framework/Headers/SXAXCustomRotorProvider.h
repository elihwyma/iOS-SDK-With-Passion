/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface SXAXCustomRotorProvider : NSObject

{
    NSSet *_cachedAvailableRotors;
    NSObject *_rootElement;
}

@property (weak, nonatomic) NSObject *rootElement;
@property (copy, nonatomic, readonly) NSSet *cachedAvailableRotors;

- (id)init;
- (id)initWithRootElement:(id)arg1;
- (id)graphSearchForAvailableCustomRotorsAndUpdateCache;

@end
