/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface EKDirectorySearchQuery : NSObject

{
    _Bool _findGroups;
    _Bool _findLocations;
    _Bool _findResources;
    _Bool _findUsers;
    NSSet *_terms;
    unsigned long long _resultLimit;
}

@property (retain, nonatomic) NSSet *terms;
@property (nonatomic) _Bool findGroups;
@property (nonatomic) _Bool findLocations;
@property (nonatomic) _Bool findResources;
@property (nonatomic) _Bool findUsers;
@property (nonatomic) unsigned long long resultLimit;

@end
