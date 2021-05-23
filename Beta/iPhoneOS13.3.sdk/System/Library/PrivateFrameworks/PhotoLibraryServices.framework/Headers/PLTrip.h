/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLTrip : NSObject

{
    unsigned long long _type;
    NSArray *_items;
}

@property (readonly) unsigned long long type;
@property (readonly) NSArray *items;

- (id)description;
- (double)duration;
- (id)typeDescription;
- (id)initWithItems:(id)arg1 type:(unsigned long long)arg2;

@end
