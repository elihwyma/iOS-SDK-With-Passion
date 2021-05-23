/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MXVersion : NSObject

{
    NSArray *_components;
}

@property (nonatomic, readonly) NSArray *components;

- (id)init;
- (long long)compare:(id)arg1;
- (id)initWithVersionString:(id)arg1;
- (id)initWithComponents:(id)arg1;

@end
