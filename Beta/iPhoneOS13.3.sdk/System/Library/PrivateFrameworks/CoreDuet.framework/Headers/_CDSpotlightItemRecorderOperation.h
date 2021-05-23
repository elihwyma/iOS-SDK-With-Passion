/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _CDSpotlightItemRecorderOperation : NSObject

{
    NSArray *_items;
    NSString *_bundleID;
    long long _type;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) long long type;

@end
