//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDAppearance : NSManagedObject
{
    NSString *_name;
    unsigned short _identifier;
}

@property(nonatomic) unsigned short identifier;
@property(copy, nonatomic) NSString *name;

@end

