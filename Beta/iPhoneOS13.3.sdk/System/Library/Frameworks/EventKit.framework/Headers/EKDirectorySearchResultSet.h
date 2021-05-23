/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface EKDirectorySearchResultSet : NSObject

{
    NSSet *_locations;
    NSSet *_groups;
    NSSet *_resources;
    NSSet *_people;
}

@property (retain, nonatomic) NSSet *locations;
@property (retain, nonatomic) NSSet *groups;
@property (retain, nonatomic) NSSet *resources;
@property (retain, nonatomic) NSSet *people;

@end
